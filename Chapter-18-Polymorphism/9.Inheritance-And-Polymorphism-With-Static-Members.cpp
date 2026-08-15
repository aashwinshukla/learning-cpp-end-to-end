class Shape
{
public: 
    Shape() = default;
    Shape(const string& description);
    ~Shape();

    void draw() const{
        cout << "Shape::draw() called. Drawing "<< m_description << endl;

    }

    virtual int get_count() const{
        return m_count;
    }

    static int m_count;
protected : 
    string m_description("");
};

// explain everything that i added extra 

class  Ellipse : public Shape
{
public : 
    Ellipse();
    Ellipse(double x_radius, double y_radius, const std::string& description);
    ~Ellipse();

private: 
    double m_x_radius;
    double m_y_radius;
};

// show how when printing shape the Shape::m_count will increase
// and also show to get a separet count for ellipse how it is as easy as to just add m_count in the Ellipse class as well and you are good to go
