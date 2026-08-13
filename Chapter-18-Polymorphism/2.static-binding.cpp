// Managing derived objects in memory through base pointers or references and
// getting the right method called on the base pointer or reference 

class Shape
{
public: 
    Shape() = default;
    Shape(const string& description);
    ~Shape();

    void draw() const{
        cout << "Shape::draw() called. Drawing "<< m_description << endl;

    }
protected : 
    string m_description("");
};

class Oval : public Shape
{
public : 
    Oval() = default;
    Oval(double x_radius, double y_radius, const string& description);
    ~Oval();

    void draw() const{
        cout<< "Oval::draw() called. Drawing " << m_description << " with m_x_radius : "<< m_x_radius << " and m_y_radius : " << m_y_radius << endl;

    }
private : 
    double m_x_radius(0.0);
    double m_y_radius(0.0);
};


class Circle ; public Oval
{
public : 
    Circle() = default;
    Circle(double radius, const string& description);
    ~Circle();

    void draw() const{
        cout<< "Circle::draw() called. Drawing : " << m_description << " with radius : "<< m_radius << endl;
    }
};

// now that we have our hierchy 
// Static binding with base class pointer

Shape shape1("Shape1");
Oval shape2(2.0, 3.0, "Oval1");
Circle shape3(3.3, "Circle1");

cout << endl;
cout << " Calling methods through pointers : static binding " << endl;

Shape* shape_ptr = &shape1;
shape_ptr->draw();  // wish for Shape::draw() to be called

shape_ptr = &oval1;
shape_ptr->draw();  // wish for Oval::draw() to be called

shape_ptr = &circle1;
shape_ptr->draw();  // wish for Circle::draw() to be called

// but when we compile and run on all three Shape::draw() is called and this what we dont want 
// and this called static binding

// the compiler just looks at the pointer type to decide what draw() version to call.
// it sees Shape* and calls Shape::draw().
// This is static binding in action!

// same will happen in the class reference as well.

// we need polymorphism to deal with more function.

