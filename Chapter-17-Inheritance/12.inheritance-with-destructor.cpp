// destructors are called in REVERSE order compared to constructors
// constructors go top-down (base first), destructors go bottom-up (derived first)

// for the Person -> Engineer -> CivilEng hierarchy:
// construction order:  Person -> Engineer -> CivilEng
// destruction order:   CivilEng -> Engineer -> Person

// this happens automatically — you don't need to call destructors manually
// the compiler handles the chain for both stack and heap objects

// IMPORTANT — virtual destructors:
// if you ever use a base class POINTER to manage a derived class object (polymorphism),
// you MUST mark the base class destructor as virtual
// otherwise only the base class destructor runs when you delete the pointer,
// the derived class destructor is skipped — causing memory leaks

// example of what can go wrong without virtual destructor:
// Person* p = new Engineer("John", 30, 5);
// delete p;   // only ~Person() called — ~Engineer() is skipped — MEMORY LEAK

// fix: always mark base class destructors as virtual if the class is meant to be inherited
// virtual ~Person() {}

// if you're not using polymorphism (no base class pointers), this is less critical
// but it's good practice to always add virtual ~ClassName() {} to any class you inherit from
