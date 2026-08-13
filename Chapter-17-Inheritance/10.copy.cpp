// copy constructor = a constructor that creates a new object as a copy of an existing one
// called automatically when an object is copied (passed by value, returned, or assigned at creation)
// if you don't write one, the compiler generates a default that does a shallow memberwise copy

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        Person() = default;
        Person(const string& fullname, int age)
            : fullname{fullname}, age{age} {}

        // copy constructor for Person
        Person(const Person& source)
            : fullname{source.fullname}, age{source.age} {
            cout << "Person copy constructor called" << endl;
        }

        string fullname {"Unknown"};
        int age {0};
};


class Engineer : public Person{
    public:
        Engineer() = default;
        Engineer(const string& fullname, int age, int contract_count)
            : Person(fullname, age), contract_count{contract_count} {}

        // copy constructor for Engineer
        // must explicitly call Person's copy constructor in the initializer list
        // otherwise Person's DEFAULT constructor runs — losing Person's data
        Engineer(const Engineer& source)
            : Person(source), contract_count{source.contract_count} {
            cout << "Engineer copy constructor called" << endl;
        }

        int contract_count {0};
};


int main(){
    Engineer eng1("John Snow", 30, 10);
    cout << "eng1 : " << eng1.fullname << ", age: " << eng1.age
         << ", contracts: " << eng1.contract_count << endl;

    // copy eng1 into eng2 — triggers copy constructors
    Engineer eng2(eng1);
    cout << "eng2 : " << eng2.fullname << ", age: " << eng2.age
         << ", contracts: " << eng2.contract_count << endl;

    return 0;
}

// output:
// Person copy constructor called
// Engineer copy constructor called
// eng1 : John Snow, age: 30, contracts: 10
// eng2 : John Snow, age: 30, contracts: 10

// KEY POINT: always call the base class copy constructor in the initializer list
// if you forget — : Person(source) — Person's members won't be copied,
// they'll be initialized to defaults ("Unknown", 0) instead
