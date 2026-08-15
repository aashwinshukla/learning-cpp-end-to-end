// pure virtual function = a virtual function with no body, set to = 0
// syntax: virtual void draw() const = 0;

// a class with at least one pure virtual function is called an ABSTRACT CLASS
// abstract classes CANNOT be instantiated — you can't create objects from them directly
// they exist only to be inherited from

// any derived class MUST override all pure virtual functions
// if a derived class doesn't override them all, it also becomes abstract

#include <iostream>
using namespace std;

class Shape{
    public:
        Shape() = default;
        Shape(const string& desc) : m_description{desc} {}
        virtual ~Shape(){}

        virtual void draw() const = 0;        // pure virtual — must be overridden
        virtual double area() const = 0;      // pure virtual — must be overridden

        void print_info() const{
            cout << "Shape: " << m_description << " area: " << area() << endl;
        }

    protected:
        string m_description {""};
};

// Shape* s = new Shape;   // ERROR — cannot instantiate abstract class

class Circle : public Shape{
    public:
        Circle(double r, const string& desc) : Shape(desc), m_radius{r} {}

        void draw() const override{
            cout << "Circle::draw() — " << m_description
                 << " radius: " << m_radius << endl;
        }
        double area() const override{
            return 3.14 * m_radius * m_radius;
        }
    private:
        double m_radius {0.0};
};

class Rectangle : public Shape{
    public:
        Rectangle(double w, double h, const string& desc)
            : Shape(desc), m_width{w}, m_height{h} {}

        void draw() const override{
            cout << "Rectangle::draw() — " << m_description
                 << " w: " << m_width << " h: " << m_height << endl;
        }
        double area() const override{
            return m_width * m_height;
        }
    private:
        double m_width  {0.0};
        double m_height {0.0};
};

int main(){
    Circle    c(5.0, "Circle1");
    Rectangle r(4.0, 6.0, "Rect1");

    c.draw();
    r.draw();
    c.print_info();   // calls area() polymorphically — works even though defined in abstract base
    r.print_info();

    // polymorphism through base pointer still works
    Shape* ptr = &c;
    ptr->draw();

    return 0;
}

// abstract classes are used to define a common interface
// every shape MUST have draw() and area() — the base enforces this contract
