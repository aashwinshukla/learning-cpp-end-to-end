// Methods to read or modify member variables of a class

class Cylinder{
    private : 
        double base_radius;
        double height;
    public : 
        //constructors ....
        //.....

        //Getters
        double get_base_radius(){
            return base_radius;
        }
        double get_height(){
            return height;
        }

        //Setters
        void set_base_radius(double radius_param){
            base_radius = radius_param;
        }
        void set_height(double height_param){
            height = height_param;
        }

        // Other opt on the class object
        //.......
};

int main(){
    Cylinder cylinder1(2,3);
    cout << "radius_base : " << cylinder1.get_base_radius()<< endl;
    return 0;

}

// getter helps us to get stuff from class
// since member variable are private we need to acesses them this way 
// we will get 0 as output since we have not assigned any value to radius in the private member variabke
// add more info if possible 