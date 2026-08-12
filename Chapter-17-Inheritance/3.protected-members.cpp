// protected = a third access specifier (alongside public and private)
// protected members are accessible inside the class AND in derived classes
// but NOT accessible from outside (like from main or other unrelated code)

// private   — only inside the class itself, not even derived classes
// protected — inside the class AND derived classes, but not from outside
// public    — accessible everywhere

#include <iostream>
#include <string>
using namespace std;

// before: private members — derived classes couldn't access them directly
// after:  protected members — derived classes CAN access them directly

class Person{
    friend ostream& operator<<(ostream& out, const Person& person);

    public:
        Person() = default;
        Person(string first_name_param, string last_name_param)
            : first_name{first_name_param}, last_name{last_name_param} {}

    protected:
        string first_name {"Mysterious"};   // accessible in derived classes
        string last_name  {"Person"};       // accessible in derived classes
};

ostream& operator<<(ostream& out, const Person& person){
    out << "Person: " << person.first_name << " " << person.last_name;
    return out;
}


class Player : public Person{
    friend ostream& operator<<(ostream& out, const Player& player);

    public:
        Player() = default;
        Player(string first_name_param, string last_name_param, string game_param)
            : Person(first_name_param, last_name_param), m_game{game_param} {}

    private:
        string m_game {"None"};
};

ostream& operator<<(ostream& out, const Player& player){
    // first_name and last_name are protected in Person
    // so Player (a derived class) can access them directly — no getters needed
    out << "Player: " << player.first_name << " "
        << player.last_name << " - Game: " << player.m_game;
    return out;
}


int main(){
    Player player1("Mario", "Bros", "Football");
    cout << player1 << endl;   // Player: Mario Bros - Game: Football

    // this would be an error — protected members not accessible from outside the class hierarchy:
    // cout << player1.first_name << endl;

    return 0;
}
