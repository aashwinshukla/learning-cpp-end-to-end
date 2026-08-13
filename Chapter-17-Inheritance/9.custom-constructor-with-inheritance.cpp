// to pass data to the base class constructor from a derived class,
// use the initializer list and explicitly call the base class constructor

// syntax:
// DerivedClass::DerivedClass(params...)
//     : BaseClass(base_params...), own_member{own_value}
// {}

// example from our Person -> Engineer hierarchy:

// Engineer::Engineer(const string& fullname, int age, const string& address, int contract_count)
//     : Person(fullname, age, address), contract_count{contract_count}
// {}

// what this does:
// 1. calls Person's constructor with fullname, age, address — initializes Person's members
// 2. then initializes contract_count which belongs to Engineer itself

// without this, you'd have to set Person's members through setters inside Engineer's body
// using the initializer list is cleaner and more efficient

// the same pattern extends further down the chain:
// CivilEng::CivilEng(const string& fullname, int age, const string& address,
//                    int contract_count, string speciality)
//     : Engineer(fullname, age, address, contract_count), speciality{speciality}
// {}
// CivilEng passes its data up to Engineer, which passes up to Person
