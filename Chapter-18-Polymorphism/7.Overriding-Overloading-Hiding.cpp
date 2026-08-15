// three related but different concepts:
// overloading = same name, different parameters, same class
// overriding  = same name, same parameters, derived class overrides base virtual method
// hiding      = derived class defines a method with same name — hides ALL base overloads

// KEY RULE: one overridden overload hides ALL other overloads from the base class
// this means if Oval overrides draw() but not draw(int color_depth),
// then draw(int color_depth) becomes inaccessible through Oval or anything derived from it

#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
        Shape() = default;
        Shape(const string& desc) : m_description{desc} {}

        // two overloads of draw in the base class
        virtual void draw() const{
            cout << "Shape::draw() — " << m_description << endl;
        }
        virtual void draw(int color_depth) const{
            cout << "Shape::draw(color_depth) — " << color_depth << endl;
        }
    protected:
        string m_description {""};
};

class Oval : public Shape{
    public:
        Oval() = default;
        Oval(double x, double y, const string& desc)
            : Shape(desc), m_x_radius{x}, m_y_radius{y} {}

        // only overrides the no-parameter version
        // this HIDES draw(int color_depth) from Shape
        virtual void draw() const override{
            cout << "Oval::draw() — " << m_description
                 << " x: " << m_x_radius << " y: " << m_y_radius << endl;
        }

        // this is a NEW overload added in Oval — NOT in Shape
        // Shape pointer cannot call this through polymorphism
        // because it was never declared in Shape
        virtual void draw(int color_depth, string color) const{
            cout << "Oval::draw(color_depth, color) — "
                 << color_depth << " " << color << endl;
        }
    private:
        double m_x_radius {0.0};
        double m_y_radius {0.0};
};

class Circle : public Oval{
    public:
        Circle() = default;
        Circle(double r, const string& desc)
            : Oval(r, r, desc), m_radius{r} {}

        virtual void draw() const override{
            cout << "Circle::draw() — " << m_description
                 << " radius: " << m_radius << endl;
        }
    private:
        double m_radius {0.0};
};

int main(){
    Circle circle1(3.3, "Circle1");

    circle1.draw();         // fine — overridden
    // circle1.draw(44);    // ERROR — draw(int) was hidden by Oval overriding draw()

    // only works through polymorphism if declared virtual in base class
    Shape* ptr = &circle1;
    ptr->draw();            // Circle::draw() — correct
    ptr->draw(44);          // Shape::draw(44) — Oval's override didn't cover this
    // ptr->draw(44, "red");// ERROR — not declared in Shape, not accessible via Shape*

    return 0;
}
