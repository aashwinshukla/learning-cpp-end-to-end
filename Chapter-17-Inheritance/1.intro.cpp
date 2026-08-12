// inheritance = a mechanism where one class acquires the properties and behavior of another class
// allows code reuse — instead of rewriting shared logic, derived classes inherit it from a base class
// just like a child inherits genes from a parent

// terminology:
// base class (parent)   = the class being inherited from
// derived class (child) = the class that inherits

// example hierarchy:
// class Person {};
// class Engineer : public Person {};    — Engineer inherits from Person
// class CivilEng : public Engineer {};  — CivilEng inherits from Engineer

// each class has its own properties PLUS everything from the class above it in the hierarchy
