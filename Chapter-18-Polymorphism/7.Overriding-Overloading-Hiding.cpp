// explain overloadiung 


class Shape
{
public: 
    Shape() = default;
    Shape(const string& description);
    ~Shape();

    virtual void draw(int color_depth) const{
        cout << "Shape::Drawing with color depth : "<< color_depth << endl;

    }

    virtual void draw() const{
        cout << "Shape::draw() called. Drawing "<< m_description << endl;

    }
protected : 
    string m_description("");
};

// now if we draw circle 
circle1.draw();
circle1.draw(44);
// with parameter or without parameter of color depth it will work

//but if in oval class
// we override the only overload that doesnt take any parameter then all the 
// other overload in the base class will be hidden 
// and since circle came from oval then we will not be able to draw 
// circle1.draw(44); with parameter
circle1.draw();
circle1.draw(44); //Error

// so remember..
// One Overridden overload hides all the other\
// and will have to specificly override them for them to be accessed by down streme classes 

// if we add following code in oval 
virtual void draw(int color_depth, std::string color) const{
    cout << " Drawing with color depth : " << color_depth << " and color : " << color << endl;
} 
// base class (Shape) is unaware of this function and thats why 
// we will be not able to call it using Shape polimorphism 
// condition is simple ....
// 1. declared to base class 
// 2. are virtual 
// if conditions meetm, base class polymorphism occcurs
