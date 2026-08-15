// virtual = tells the compiler to use dynamic binding for this method
// now the compiler looks at the ACTUAL OBJECT TYPE at runtime, not the pointer type
// this enables polymorphism

#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
        Shape() = default;
        Shape(const string& description) : m_description{description} {}
        ~Shape(){}

        virtual void draw() const{   // virtual — enables dynamic binding
            cout << "Shape::draw() called. Drawing " << m_description << endl;
        }
    protected:
        string m_description {""};
};

class Oval : public Shape{
    public:
        Oval() = default;
        Oval(double x_radius, double y_radius, const string& description)
            : Shape(description), m_x_radius{x_radius}, m_y_radius{y_radius} {}
        ~Oval(){}

        virtual void draw() const{   // virtual in derived class too (good practice)
            cout << "Oval::draw() called. Drawing " << m_description
                 << " x_radius: " << m_x_radius << " y_radius: " << m_y_radius << endl;
        }
    private:
        double m_x_radius {0.0};
        double m_y_radius {0.0};
};

class Circle : public Oval{
    public:
        Circle() = default;
        Circle(double radius, const string& description)
            : Oval(radius, radius, description), m_radius{radius} {}
        ~Circle(){}

        virtual void draw() const{
            cout << "Circle::draw() called. Drawing " << m_description
                 << " radius: " << m_radius << endl;
        }
    private:
        double m_radius {0.0};
};

// helper functions using polymorphism
void draw_shape(const Shape& shape){
    shape.draw();   // calls the right version based on actual object type
}

void draw_shape_through_ptr(Shape* shape_ptr){
    shape_ptr->draw();   // same — dynamic binding through pointer
}

int main(){
    Shape  shape1("Shape1");
    Oval   oval1(2.0, 3.0, "Oval1");
    Circle circle1(3.3, "Circle1");

    cout << "Polymorphism with references:" << endl;
    draw_shape(shape1);    // Shape::draw()
    draw_shape(oval1);     // Oval::draw()
    draw_shape(circle1);   // Circle::draw()

    cout << "\nPolymorphism with pointers:" << endl;
    draw_shape_through_ptr(&shape1);    // Shape::draw()
    draw_shape_through_ptr(&oval1);     // Oval::draw()
    draw_shape_through_ptr(&circle1);   // Circle::draw()

    // non-virtual functions are NOT accessible through polymorphism
    cout << "\nNo access to non-virtual functions through a base pointer:" << endl;
    Shape* shape_ptr = &oval1;
    // shape_ptr->get_x_rad();   // ERROR — get_x_rad() not declared in Shape
    shape_ptr->draw();            // fine — draw() is virtual

    return 0;
}
