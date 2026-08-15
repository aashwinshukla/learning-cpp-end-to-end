// dynamic binding is not free — virtual functions add memory overhead
// each class with virtual functions gets a hidden pointer called a vptr (virtual table pointer)
// the vptr points to a vtable — a table of function pointers for that class
// this is how the compiler knows which draw() to call at runtime

// you can see the size difference by commenting out virtual:
// cout << "sizeof(Shape)  : " << sizeof(Shape)  << endl;   // larger with virtual
// cout << "sizeof(Oval)   : " << sizeof(Oval)   << endl;
// cout << "sizeof(Circle) : " << sizeof(Circle) << endl;

// OBJECT SLICING
// slicing happens when you assign a derived object to a base object (not a pointer/reference)

// think of it like an onion:
// Shape  = innermost layer
// Oval   = middle layer
// Circle = outermost layer

// when you do:
// Shape shape2 = circle1;
// you're trying to fit an entire onion into just the innermost layer of another onion
// the compiler strips off the Circle and Oval layers
// only the Shape part of circle1 gets copied into shape2 — the rest is lost forever

// this is why you should ALWAYS use pointers or references for polymorphism
// never store derived objects in base object variables directly

#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
        Shape() = default;
        Shape(const string& desc) : m_description{desc} {}
        virtual void draw() const{
            cout << "Shape::draw() — " << m_description << endl;
        }
    protected:
        string m_description {""};
};

class Circle : public Shape{
    public:
        Circle() = default;
        Circle(double r, const string& desc) : Shape(desc), m_radius{r} {}
        virtual void draw() const{
            cout << "Circle::draw() — " << m_description
                 << " radius: " << m_radius << endl;
        }
    private:
        double m_radius {0.0};
};

int main(){
    Circle circle1(3.3, "Circle1");

    // slicing — Circle data is lost
    Shape shape2 = circle1;
    shape2.draw();   // Shape::draw() — Circle part was sliced off

    // correct — use pointer or reference
    Shape* shape_ptr = &circle1;
    shape_ptr->draw();   // Circle::draw() — no slicing

    cout << "sizeof(Shape)  : " << sizeof(Shape)  << endl;
    cout << "sizeof(Circle) : " << sizeof(Circle) << endl;

    return 0;
}
