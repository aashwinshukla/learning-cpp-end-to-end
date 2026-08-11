// your first C++ class

// lets make our own data type, for our own uses

// Syntax
#include <iostream>
using namespace std; 

const double PI {3.14};

class Cylinder{
    public :
        double base_radius {1.0};   // these are going to define properties of the class
        double height {1.0};        // member variables

    public :                        // next part makes up the behaviour of the class
        double volume(){            // it uses properties to work as function for the class
            return PI * base_radius * base_radius * height;
        }    

};

// now we can use the Cylinder type we created ourself

int main(){
    Cylinder cylinder1;  // Object
    cout << "Vloume c1 : " << cylinder1.volume() << endl;

    cylinder1.base_radius = 3.0;
    cylinder1.height = 2;
    cout << "Vloume c1 : " << cylinder1.volume() << endl;

    Cylinder cylinder2;
    cout << "Volume c2 : "<< cylinder2.volume() << endl;

    return 0;
}


// VERY IMP:
// all parts of the class are private by default 
// so have to add the keyword public to acesses functions like volume :
// cylinder1.volume()


// members variable cant be references
// class methods have acesses to the member variable, 
// even if they are private
 