// your first C++ class — creating your own custom data type

#include <iostream>
using namespace std;

const double PI {3.14};

class Cylinder{
    public:
        double base_radius {1.0};   // member variables — define the properties of the class
        double height {1.0};

        double volume(){            // member function — defines the behavior of the class
            return PI * base_radius * base_radius * height;
        }
};

int main(){
    Cylinder cylinder1;   // creating an object from the Cylinder class
    cout << "Volume c1 : " << cylinder1.volume() << endl;   // 3.14

    cylinder1.base_radius = 3.0;
    cylinder1.height = 2.0;
    cout << "Volume c1 : " << cylinder1.volume() << endl;   // 56.52

    Cylinder cylinder2;
    cout << "Volume c2 : " << cylinder2.volume() << endl;   // 3.14

    return 0;
}

// IMPORTANT:
// all members of a class are private by default
// you need to add public: to access them from outside the class (like in main)

// member variables cannot be references
// member functions have access to all member variables even if they are private
