// size of the object is determined by the number of member variable
// and has nothing to do with functions inside the class
// so if...
private : 
    size_t leg_counts;
    size_t arm_counts;
// class name in Dog

// later in main we make a...
 
Dog dog1;
cout << "sizeof(Dog) :" << sizeof(Dog) << endl;

// we will get 16
// beacuse size of size_t is 8 and there are 2 of them 
// therefore 