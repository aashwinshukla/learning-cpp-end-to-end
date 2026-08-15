// dynamic_cast = safely converts a base class pointer/reference to a derived class pointer/reference
// used when you have a base pointer but need to access derived-class-specific methods
// only works with polymorphic classes (must have at least one virtual function)

// if the cast succeeds — returns a valid pointer to the derived type
// if the cast fails   — returns nullptr (for pointers) or throws std::bad_cast (for references)

#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void draw() const = 0;
        virtual ~Shape(){}
};

class Circle : public Shape{
    public:
        void draw() const override{
            cout << "Circle::draw() called" << endl;
        }
        void circle_specific(){
            cout << "Circle specific method called" << endl;
        }
};

class Oval : public Shape{
    public:
        void draw() const override{
            cout << "Oval::draw() called" << endl;
        }
};

int main(){
    Shape* shape_ptr = new Circle;

    // trying to call circle_specific() through Shape* would be an error
    // shape_ptr->circle_specific();   // ERROR — not in Shape

    // dynamic_cast to access the derived method safely
    Circle* circle_ptr = dynamic_cast<Circle*>(shape_ptr);

    if(circle_ptr){
        circle_ptr->circle_specific();   // safe — cast succeeded
        circle_ptr->draw();
    }else{
        cout << "Cast failed" << endl;
    }

    // cast to wrong type — returns nullptr
    Oval* oval_ptr = dynamic_cast<Oval*>(shape_ptr);
    if(oval_ptr){
        oval_ptr->draw();
    }else{
        cout << "Cast to Oval failed — shape_ptr is actually a Circle" << endl;
    }

    delete shape_ptr;
    return 0;
}

// dynamic_cast vs static_cast:
// static_cast  — no runtime check, faster but unsafe if wrong type
// dynamic_cast — runtime check, safe, returns nullptr on failure, slight performance cost
// prefer dynamic_cast when you're not sure of the actual type at runtime
