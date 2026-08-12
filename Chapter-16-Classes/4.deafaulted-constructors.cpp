// when you define your own constructor, the compiler stops generating a default one
// to still allow creating objects without arguments, explicitly ask for it with = default

#include <iostream>
using namespace std;

const double PI {3.14};

class Cylinder{
    private:
        double base_radius {1.0};
        double height {1.0};

    public:
        Cylinder() = default;   // tells compiler to still generate the default constructor

        Cylinder(double radius_param, double height_param){
            base_radius = radius_param;
            height = height_param;
        }

        double volume(){
            return PI * base_radius * base_radius * height;
        }
};

int main(){
    Cylinder c1;          // works — = default allows this
    Cylinder c2(2, 3);    // works — uses the parameterized constructor

    cout << "Volume c1 : " << c1.volume() << endl;   // 3.14
    cout << "Volume c2 : " << c2.volume() << endl;   // 37.68

    return 0;
}
