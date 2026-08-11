// Special methods that are called when an object dies.
// They are needed when the objects needs to release spme dynamic memory 
// or for some other kind of clean up.

// Syntax 

class Dog {
    public : 
        Dog(std::string name_param, std::string breed_param, int age_param);
        ~Dog(); //Destructor declared
                // can also declare and implement in here : syntax commented out below : 
        
        /*
        ~Dog(){
            delete dog_age;
            std::cout << "Dog destructor called for " << dog_name << std::endl;

        }
        */
    private : 
        std::string dog_name;
        std::string dog_breed;
        int * dog_age;
};


Dog::Dog(){
    dog_name = "None";
    dog_breed = "None";
    dog_age = = new int;   // dynamic memory alloaction
    *dog_age = 0;
}

Dog::dog(std::string name_param, std::string breed_param, int age_param);
{
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = = new int; // memory allocated on heap
    *dog_age = age_param;
}

Dog::~Dog(){
    delete dog_age;
    std::cout << "Dog destructor called for " << dog_name << std::endl;
}