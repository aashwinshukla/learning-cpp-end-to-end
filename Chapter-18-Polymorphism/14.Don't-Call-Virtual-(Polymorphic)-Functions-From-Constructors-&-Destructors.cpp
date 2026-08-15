// never call virtual functions from constructors or destructors
// during construction, the derived class is not fully built yet
// so the virtual call resolves to the BASE class version, not the derived version
// this is confusing and almost always a bug

// same applies to destructors — by the time the base destructor runs,
// the derived part has already been destroyed, so calling virtual gives base version again

#include <iostream>
using namespace std;

class Shape{
    public:
        Shape(){
            // BAD — draw() is virtual but during Shape's constructor,
            // the derived part doesn't exist yet
            // this always calls Shape::draw(), never the derived version
            draw();   // calls Shape::draw() even if object is a Circle
        }
        virtual ~Shape(){
            draw();   // same issue — Circle part already destroyed, calls Shape::draw()
        }
        virtual void draw() const{
            cout << "Shape::draw() called" << endl;
        }
};

class Circle : public Shape{
    public:
        Circle(){
            cout << "Circle constructor called" << endl;
        }
        void draw() const override{
            cout << "Circle::draw() called" << endl;
        }
};

int main(){
    Circle c;
    // output during construction:
    // Shape::draw() called    <- NOT Circle::draw(), even though object is a Circle
    // Circle constructor called

    // output during destruction:
    // Shape::draw() called    <- again, not Circle::draw()

    return 0;
}

// the fix: don't call virtual functions in constructors or destructors
// if you need initialization logic, use a separate init() method and call it explicitly
// after the object is fully constructed
