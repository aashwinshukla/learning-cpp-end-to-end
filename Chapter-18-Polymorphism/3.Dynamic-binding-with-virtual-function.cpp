// explain virtual here 
// to make things static to dynamic lets edit few things 

class Shape
{
public: 
    Shape() = default;
    Shape(const string& description);
    ~Shape();

    virtual void draw() const{  //added virtual keyword
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

    virtual void draw() const{  // added virtual in oval as well
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

    virtual void draw() const{  // here as well
        cout<< "Circle::draw() called. Drawing : " << m_description << " with radius : "<< m_radius << endl;
    }
};

Shape shape1("Shape1");
Oval shape2(2.0, 3.0, "Oval1");
Circle shape3(3.3, "Circle1");

cout << "Polymorphism (dynamic Binding) with reference : " << endl;
draw_shape(shape1);
draw_shape(oval1);
draw_shape(circle1);

cout << endl;
cout << "Polymorphism (dynamic Binding) with pointers : " << endl;

draw_shape_through_ptr(&shape1);
draw_shape_through_ptr(&oval1);
draw_shape_through_ptr(&circle1);

// you dont have access to non virtual functions through polymorphism 
cout << endl;
cout << " No access to non virtual functions through polymorphism "<< endl;
Shape* shape_ptr = &oval1
// shape_ptr->get_x_rad();
shape_ptr->draw();


// now no static binding 
// now compiler will not see the type of the pointer
// but the type of the object that the pointer is managing