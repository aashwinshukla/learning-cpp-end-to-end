// objects can be created on the stack (normal) or on the heap (with new)
// heap objects are accessed through pointers
// use -> to call methods on a pointer instead of (*ptr).method()

#include <iostream>
using namespace std;

const double PI {3.1415};

class Cylinder{
    private:
        double base_radius {20};
        double height {30};

    public:
        Cylinder() = default;

        Cylinder(double radius_param, double height_param)
            : base_radius{radius_param}, height{height_param} {}

        double volume(){
            return PI * base_radius * base_radius * height;
        }

        double get_base_radius(){ return base_radius; }
        double get_height(){ return height; }
        void set_base_radius(double r){ base_radius = r; }
        void set_height(double h){ height = h; }
};

int main(){

    // stack object — created and destroyed automatically
    Cylinder c1;
    cout << "Volume c1 : " << c1.volume() << endl;

    // heap object — created with new, must be deleted manually
    Cylinder* c2 = new Cylinder(11, 20);

    // two ways to call methods through a pointer:
    cout << "Volume c2 : " << (*c2).volume() << endl;   // dereference then call
    cout << "Volume c2 : " << c2->volume()   << endl;   // arrow operator — cleaner

    // modifying through pointer using ->
    c2->set_base_radius(5.0);
    cout << "Volume c2 after change : " << c2->volume() << endl;

    delete c2;   // always release heap memory when done
    c2 = nullptr;

    return 0;
}
