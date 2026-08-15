// static binding = compiler decides which function to call based on the POINTER TYPE
// not the actual object — this is the default behavior without virtual

#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
        Shape() = default;
        Shape(const string& description) : m_description{description} {}
        ~Shape(){}

        void draw() const{
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

        void draw() const{
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

        void draw() const{
            cout << "Circle::draw() called. Drawing " << m_description
                 << " radius: " << m_radius << endl;
        }
    private:
        double m_radius {0.0};
};

int main(){
    Shape  shape1("Shape1");
    Oval   oval1(2.0, 3.0, "Oval1");
    Circle circle1(3.3, "Circle1");

    cout << "Calling methods through pointers (static binding):" << endl;

    Shape* shape_ptr = &shape1;
    shape_ptr->draw();   // Shape::draw() — correct

    shape_ptr = &oval1;
    shape_ptr->draw();   // Shape::draw() — WRONG, expected Oval::draw()

    shape_ptr = &circle1;
    shape_ptr->draw();   // Shape::draw() — WRONG, expected Circle::draw()

    // all three call Shape::draw() because the pointer type is Shape*
    // compiler looks at the pointer type, not the actual object — this is static binding
    // to fix this we need virtual functions (dynamic binding)

    return 0;
}
