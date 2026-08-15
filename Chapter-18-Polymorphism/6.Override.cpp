// explain overide and what it is and do 

class Oval : public Shape
{
public : 
    Oval() = default;
    Oval(double x_radius, double y_radius, const string& description);
    ~Oval();

    virtual void draw() const override{  // added override in oval
        cout<< "Oval::draw() called. Drawing " << m_description << " with m_x_radius : "<< m_x_radius << " and m_y_radius : " << m_y_radius << endl;

    }
private : 
    double m_x_radius(0.0);
    double m_y_radius(0.0);
};
