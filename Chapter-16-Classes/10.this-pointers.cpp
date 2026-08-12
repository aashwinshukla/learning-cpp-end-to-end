// Each class member function contains a hidden pointer called this.
// That pointer contains the address of the current object, for which the method is being executed.
// This also applies to constructors and destructors.


Dog::Dog(){
    dog_name = "None";
    dog_breed = "None";
    dog_age = = new int;   // dynamic memory alloaction
    *dog_age = 0;

cout << "Dog : " << dog_name << " constructed at " << this << endl;
}

*Dog::Dog(const string& name_param, const string& breed_param, int age_param)
{
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = = new int; // memory allocated on heap
    *dog_age = age_param;
    
    cout << "Dog : "<< dog_name << " Construct at : "<< this << endl;
}


// this is the pointer that points to the object currently getting manipulated
