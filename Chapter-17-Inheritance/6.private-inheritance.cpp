// private inheritance makes all inherited members private in the derived class
// even if they were public or protected in the base class

// class Person {};
// class Engineer : private Person {};
// — all public/protected members of Person become private inside Engineer

// this means if you derive further:
// class CivilEng : public Engineer {};
// — CivilEng cannot access any of Person's members at all
//   because they are now private inside Engineer, and private is never passed down

// this is why private inheritance is rare — it effectively cuts off the chain
// use it only when you want to use the base class internals but NOT expose them further
