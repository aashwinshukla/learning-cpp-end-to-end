// storing polymorphic objects in collections
// you CANNOT store derived objects directly in a base array — slicing will occur
// you MUST store base class pointers instead

#include <iostream>
#include <string>
#include <memory>
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

class Oval : public Shape{
    public:
        Oval() = default;
        Oval(double x, double y, const string& desc)
            : Shape(desc), m_x_radius{x}, m_y_radius{y} {}
        virtual void draw() const{
            cout << "Oval::draw() — " << m_description
                 << " x: " << m_x_radius << " y: " << m_y_radius << endl;
        }
    private:
        double m_x_radius {0.0};
        double m_y_radius {0.0};
};

int main(){
    Circle circle1(7.2,  "circle1");
    Oval   oval1(13.2, 1.3, "oval1");
    Circle circle2(11.2, "circle2");

    // WRONG — slicing occurs, all objects become Shape
    // Shape shapes[]{circle1, oval1, circle2};

    // WRONG — can't store references in a collection
    // const Shape& shapes[]{circle1, oval1, circle2};

    // CORRECT — raw pointers to base class
    Shape* shapes[]{&circle1, &oval1, &circle2};
    cout << "Raw pointer array:" << endl;
    for(Shape* shape_ptr : shapes){
        shape_ptr->draw();   // correct draw() called for each
    }

    // BETTER — smart pointers (shared_ptr)
    // manages memory automatically — no need to call delete
    shared_ptr<Shape> smart_shapes[]{
        make_shared<Circle>(12.2,       "Circle4"),
        make_shared<Oval>  (10.0, 20.0, "Oval4"),
        make_shared<Circle>(5.5,        "Circle5")
    };
    cout << "\nSmart pointer array:" << endl;
    for(const auto& s : smart_shapes){
        s->draw();
    }

    return 0;
}
