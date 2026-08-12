// getters and setters = methods used to read or modify private member variables
// since member variables are private, you can't access them directly from outside the class
// getters let you READ them, setters let you WRITE them

#include <iostream>
using namespace std;

const double PI {3.14};

class Cylinder{
    private:
        double base_radius {1.0};
        double height {1.0};

    public:
        Cylinder() = default;

        Cylinder(double radius_param, double height_param){
            base_radius = radius_param;
            height = height_param;
        }

        // getters — return the value of a private member
        double get_base_radius(){
            return base_radius;
        }
        double get_height(){
            return height;
        }

        // setters — allow changing a private member from outside the class
        void set_base_radius(double radius_param){
            base_radius = radius_param;
        }
        void set_height(double height_param){
            height = height_param;
        }

        double volume(){
            return PI * base_radius * base_radius * height;
        }
};

int main(){
    Cylinder cylinder1(2, 3);

    // reading with getters
    cout << "base_radius : " << cylinder1.get_base_radius() << endl;   // 2
    cout << "height      : " << cylinder1.get_height()      << endl;   // 3
    cout << "volume      : " << cylinder1.volume()          << endl;   // 37.68

    // modifying with setters
    cylinder1.set_base_radius(5.0);
    cylinder1.set_height(10.0);
    cout << "new volume  : " << cylinder1.volume()          << endl;   // 785

    return 0;
}

// without getters/setters you'd have to make member variables public
// that breaks encapsulation — anyone can change them without control
// setters can also validate input before assigning (eg. reject negative radius)
