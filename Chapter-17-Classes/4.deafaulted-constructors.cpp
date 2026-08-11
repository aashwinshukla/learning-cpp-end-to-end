// Syntax 

class Cylinder(){
    public : 
        double base_radius {1.0};
        double height {1.0};
        
    public :
        //Contructors
        Cylinder() = default;
        Cylinder(double radius_param, double height_param){
            base_radius = radius_param;
            height = height_param;

        }
}       double volume(){
    retrun PI * base_radius * base_radius * height;
};

// if you start making your own constructor the program stops making default constructor
// to ask program to still construct object without parameter use,
// class_name() = default;