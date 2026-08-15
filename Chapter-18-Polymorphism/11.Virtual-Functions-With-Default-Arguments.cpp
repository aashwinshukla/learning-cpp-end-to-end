// default arguments in virtual functions can cause confusing behavior
// the default argument used is determined by the STATIC TYPE (pointer type), not the actual object
// this means even with dynamic binding, the wrong default can be picked up

#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void draw(int color_depth = 5) const{
            cout << "Shape::draw() color_depth: " << color_depth << endl;
        }
};

class Circle : public Shape{
    public:
        virtual void draw(int color_depth = 50) const override{
            cout << "Circle::draw() color_depth: " << color_depth << endl;
        }
};

int main(){
    Circle circle1;

    // called directly on the object — uses Circle's default (50)
    circle1.draw();
    cout << endl;

    // called through a base pointer — dynamic binding picks Circle::draw()
    // BUT the default argument comes from Shape (5), not Circle (50)
    // because default arguments are resolved at compile time using the pointer type
    Shape* ptr = &circle1;
    ptr->draw();

    return 0;
}

// output:
// Circle::draw() color_depth: 50   <- direct call, Circle's default used
// Circle::draw() color_depth: 5    <- pointer call, Shape's default used (surprising!)

// RECOMMENDATION:
// avoid using different default arguments in base and derived virtual functions
// it leads to confusing behavior that is hard to debug
// best practice: use the same default in all versions, or don't use defaults at all
