// override = a keyword added to a derived class method to explicitly say
// "this is intentionally overriding a virtual method from the base class"

// why use it:
// without override, if you misspell the function name or get the signature wrong,
// the compiler silently creates a NEW function instead of overriding — no error
// with override, the compiler checks and throws an error if no matching virtual exists

// example:
// virtual void draw() const override { ... }   — correct, overrides base draw()
// virtual void drw()  const override { ... }   — COMPILE ERROR — no virtual drw() in base

// it's considered best practice to always write override on derived virtual methods

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

class Oval : public Shape{
    public:
        Oval() = default;
        Oval(double x, double y, const string& desc)
            : Shape(desc), m_x_radius{x}, m_y_radius{y} {}

        virtual void draw() const override{   // override confirms this matches a base virtual
            cout << "Oval::draw() — " << m_description
                 << " x: " << m_x_radius << " y: " << m_y_radius << endl;
        }
    private:
        double m_x_radius {0.0};
        double m_y_radius {0.0};
};

int main(){
    Shape* ptr = new Oval(3.0, 5.0, "Oval1");
    ptr->draw();   // Oval::draw() — override working correctly
    delete ptr;
    return 0;
}
