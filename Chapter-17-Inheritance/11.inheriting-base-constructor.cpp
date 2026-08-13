// at default the base constructor are not inherited by the derived classes
//to do so 

class Engineer : public Person
{
    using Person::Person; // Inheriting the constructor
friend std::ostream& operator << (std::ostream& out , const Engineer& operand);
public : 
    Engineer(const Engineer& source);
    ~Engineer();

protected : 
    int contract_count {999999}; // Default value
};


// 1. Copy contsructors are not inherited.
//    But you wont ususally notice this as the compiler will insert an automatic copy constructor.

// 2. inherited constructor are base constyruxtor 
//    they have no knowledge of the derived class.
//    any member from the derived class will just contain junk or whatever default value its initialized with

// 3. Constructors are inherited with whatever access specifier they had in base class

// 4. on top of derived constructors, 
//    you can add your own that possibly properly initialize derived member variable

// 5. Inheriting construct adds a level of confusion to your code.
//    its not clear which constructor is building your object.
//    it is recommended to avoid them and only use this feature if no other option is available

