// when private inheritance hides members you still need,
// you can bring specific ones back using the 'using' keyword inside the derived class
// this is called resurrecting members

// syntax: put 'using BaseClass::member_name;' under your chosen access specifier

// class Engineer : private Person {
//     protected:
//         using Person::get_full_name;   // resurrect as protected
//         using Person::get_age;
//         using Person::get_address;
//     public:
//         using Person::some_method;     // resurrect as public
// };

// IMPORTANT rules:
// 1. you can only resurrect members that were public or protected in the ORIGINAL base class
//    you cannot resurrect something that was already private in Person
// 2. you can choose a HIGHER or EQUAL access level — not lower
//    eg. a protected member in Person can be resurrected as protected or public
//    but NOT as private (it's already private due to private inheritance — no point)
