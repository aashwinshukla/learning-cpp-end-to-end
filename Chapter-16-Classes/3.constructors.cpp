// constructor = a special method called automatically when an object is created
// rules:
// 1. no return type
// 2. same name as the class
// 3. can have parameters or an empty parameter list
// 4. usually used to initialize member variables

#include <iostream>
using namespace std;

const double PI {3.14};

class Cylinder{
    private:
        double base_radius {1.0};
        double height {1.0};

    public:
        // no-parameter constructor
        Cylinder(){
            base_radius = 1.0;
            height = 1.0;
        }

        // parameterized constructor
        Cylinder(double radius_param, double height_param){
            base_radius = radius_param;
            height = height_param;
        }

        double volume(){
            return PI * base_radius * base_radius * height;
        }
};

int main(){
    Cylinder cylinder1;       // calls no-parameter constructor
    cout << "Volume : " << cylinder1.volume() << endl;   // 3.14

    Cylinder cylinder2(2, 2); // calls parameterized constructor
    cout << "Volume : " << cylinder2.volume() << endl;   // 25.12

    return 0;
}

// cylinder1 used the no-parameter constructor — base_radius = 1, height = 1
// cylinder2 used the parameterized constructor — base_radius = 2, height = 2
