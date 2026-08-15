// static member variables are shared across ALL objects of that class
// you can make get_count() virtual so derived classes can override it

// in this example Shape has a static m_count that increments whenever a Shape is created
// if you also want a separate count for Ellipse objects,
// just add a static m_count inside Ellipse — the two counts are independent

#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
        Shape(){
            ++m_count;
        }
        Shape(const string& description) : m_description{description}{
            ++m_count;
        }
        virtual ~Shape(){}

        virtual int get_count() const{
            return m_count;
        }

        static int m_count;   // shared across all Shape objects

    protected:
        string m_description {""};
};

int Shape::m_count {0};   // definition outside the class — required for static members


class Ellipse : public Shape{
    public:
        Ellipse(){
            ++m_count;   // Ellipse's own separate count
        }
        Ellipse(double x_radius, double y_radius, const string& description)
            : Shape(description), m_x_radius{x_radius}, m_y_radius{y_radius}{
            ++m_count;
        }
        ~Ellipse(){}

        // override get_count to return Ellipse's own count
        virtual int get_count() const override{
            return m_count;
        }

        static int m_count;   // separate count just for Ellipse objects

    private:
        double m_x_radius {0.0};
        double m_y_radius {0.0};
};

int Ellipse::m_count {0};


int main(){
    Shape s1("Shape1");
    Shape s2("Shape2");
    Shape s3("Shape3");

    cout << "Shape count    : " << Shape::m_count   << endl;   // 3

    Ellipse e1(1.0, 2.0, "Ellipse1");
    Ellipse e2(3.0, 4.0, "Ellipse2");

    // Shape::m_count also increments when Ellipse is created (calls Shape constructor)
    cout << "Shape count after Ellipse : " << Shape::m_count   << endl;   // 5
    cout << "Ellipse count             : " << Ellipse::m_count << endl;   // 2

    // polymorphism — get_count() returns the right count based on actual object type
    Shape* ptr1 = &s1;
    Shape* ptr2 = &e1;
    cout << "ptr1->get_count() : " << ptr1->get_count() << endl;   // 5 (Shape count)
    cout << "ptr2->get_count() : " << ptr2->get_count() << endl;   // 2 (Ellipse count)

    return 0;
}
