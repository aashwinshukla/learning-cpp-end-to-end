// when a derived class object is created, constructors are called top-down
// the base class constructor runs FIRST, then the derived class constructor

// example with Person -> Engineer -> CivilEng hierarchy:

// int main(){
//     CivilEng civil_eng1;
// }

// output would be:
// Person default constructor called
// Engineer default constructor called
// CivilEng default constructor called

// destructors run in REVERSE order (bottom-up):
// CivilEng destructor called
// Engineer destructor called
// Person destructor called

// IMPORTANT: always provide a default constructor for your classes
// especially when they are part of an inheritance hierarchy
// if a base class has no default constructor and you don't explicitly call one
// in the derived class initializer list, it will cause a compile error
