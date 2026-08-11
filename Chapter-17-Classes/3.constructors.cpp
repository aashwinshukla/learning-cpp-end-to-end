// a special kind of method that is called when an instance of a class is created
// 1. no return type 
// 2. same name as the class
// 3. can have parameters. Can also have an empty parameter list 
// 4. Usually used to initiallize member variable of a class 

#include <iostream>
using namespace std; 

const double PI {3.14};

class Cylinder{
    private :
        double base_radius {1.0};  
        double height {1.0};        

    public : 
        Cylinder (){
            base_radius = 2.0;          // constructor with no parameter
            height = 2.0; 
        };
        
        Cylinder(double radius_param, double height_param ){
            base_radius = radius_param;
            height = height_param;          // constructor with parameter
        }

        double volume(){            
            return PI * base_radius * height;
        }    

};