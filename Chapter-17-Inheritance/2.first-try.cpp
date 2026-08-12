// first inheritance example — Player inherits from Person
// Player gets all public members of Person without rewriting them

#include <iostream>
#include <string>
using namespace std;

class Person{
    friend ostream& operator<<(ostream& out, const Person& person);

    public:
        Person() = default;
        Person(string first_name_param, string last_name_param)
            : first_name{first_name_param}, last_name{last_name_param} {}

        string get_first_name() const { return first_name; }
        string get_last_name()  const { return last_name;  }

    private:
        string first_name {"Mysterious"};
        string last_name  {"Person"};
};

ostream& operator<<(ostream& out, const Person& person){
    out << "Person: " << person.first_name << " " << person.last_name;
    return out;
}


// Player inherits from Person — note: Person not person (case sensitive)
class Player : public Person{
    friend ostream& operator<<(ostream& out, const Player& player);

    public:
        Player() = default;
        Player(string game_param) : m_game{game_param} {}
        Player(string first_name_param, string last_name_param, string game_param)
            : Person(first_name_param, last_name_param), m_game{game_param} {}

    private:
        string m_game {"None"};
};

ostream& operator<<(ostream& out, const Player& player){
    // can't access player.first_name directly — it's private in Person
    // use getters instead
    out << "Player: " << player.get_first_name() << " "
        << player.get_last_name() << " - Game: " << player.m_game;
    return out;
}


int main(){
    Person person1("John", "Snow");
    cout << person1 << endl;   // Person: John Snow

    Player player1("Mario", "Bros", "Football");
    cout << player1 << endl;   // Player: Mario Bros - Game: Football

    // Player can use Person's public methods
    cout << "First name : " << player1.get_first_name() << endl;   // Mario

    return 0;
}

// rules with public inheritance:
// 1. derived class can use public members of the base class
//    but CANNOT directly access private members — use getters/setters for that
// 2. friends of the derived class also cannot access private members of the base class
