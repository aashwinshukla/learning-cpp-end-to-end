// Methods to read or modify member variables of a class

class Cylinder(){
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

// getter helps us to get stuff from class
// since member variable are private we need to acesses them this way 

// add more info if possible 