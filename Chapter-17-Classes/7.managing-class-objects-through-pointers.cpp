#include <iostream>
using namespace std;

const double PI {3.1415}; 

class Cylinder{
    private : 
        double base_radius {20};
        double height {30};
    public : 
        Cylinder() = default;
        
        Cylinder(double radius_param, double height_param) 
            : base_radius{radius_param}, height{height_param} {}
            
        double volume(){            
            return PI * base_radius * base_radius * height;
        }  
      
        double get_base_radius(){
            return base_radius;
        }
        double get_height(){
            return height;
        }

        void set_base_radius(double radius_param){
            base_radius = radius_param;
        }
        void set_height(double height_param){
            height = height_param;
        }

       
};

int main(){
    Cylinder c1;
    cout << " Volume c1 : " << c1.volume() << endl;

    Cylinder* c2 = new Cylinder(11, 20); // created object on heap
    cout << "Volume c2 : " << (*c2).volume() << endl;
    cout << "Volume c2 : " << c2->volume() << endl;     // this is also one of the ways to dereference the pointer

    delete c2; // release the memory from heap 
    return 0;
}

