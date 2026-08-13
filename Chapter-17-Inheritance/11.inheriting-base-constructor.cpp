// by default, base class constructors are NOT inherited by derived classes
// to inherit them, use the 'using' keyword inside the derived class

// class Engineer : public Person {
//     using Person::Person;   // inherits ALL of Person's constructors
// };

// important rules to know:

// 1. copy constructors are NOT inherited
//    the compiler will generate an automatic copy constructor for the derived class though,
//    so you usually won't notice — but it may not copy derived members correctly

// 2. inherited constructors are base constructors
//    they have no knowledge of the derived class
//    any member from the derived class will hold junk or whatever default value it was initialized with
//    eg: contract_count {999999} — that default is used since the inherited constructor can't set it

// 3. constructors are inherited with whatever access specifier they had in the base class
//    a public constructor in Person stays public in Engineer after inheriting

// 4. you can still add your OWN constructors on top of inherited ones
//    your custom constructors can properly initialize the derived class members

// 5. inheriting constructors adds confusion — it's not clear which constructor is building the object
//    recommendation: avoid them unless there is no other option

class Engineer : public Person{
    using Person::Person;   // inherits Person's constructors

    friend std::ostream& operator<<(std::ostream& out, const Engineer& operand);

    public:
        Engineer(const Engineer& source);   // copy constructor — not inherited, defined separately
        ~Engineer();

    protected:
        int contract_count {999999};   // default — inherited constructors can't set this properly
};
