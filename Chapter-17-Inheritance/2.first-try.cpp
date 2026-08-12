class Person
{
    friend std::ostream& operator<< (std::ostream& out, const Person& person);
public : 
    Person();
    Person(std::string first_name_param, std::string last_name_param);
    ~Person();
private : 
    std::string first_name{"Mysterious"};
    std::string last_name{"Person"};

};

// so now we can make new classes....
// #include "person.h"  
class Person;

class Player : public person
{
    friend std::ostream& operator<< (std::ostream& out, const Player& player);
public : 
    Player() = default;
    Player(std::string game_param);
    ~Player();
private : 
    std::string m_game{"None"};

};

// now this will have features of his own as well as person class features
// without writing them again 


// 1. with public inheritance, derived classes can access and use public members of the base class.
//    but the derived class cant directly access private members.

// 2. the same also applies to friends of the derived class.
//   They have access to private members of derived, 
//   but dont have access to the base class


// we can use setters and getters for now to get the private members
