// demo for the three inheritance types

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string first_name {"John"};   // public
    protected:
        string last_name  {"Snow"};   // protected
    private:
        int age {30};                 // private
};


// public inheritance — access levels preserved
class Player_Public : public Person{
    public:
        void show(){
            cout << first_name << endl;   // fine — still public
            cout << last_name  << endl;   // fine — still protected
            // cout << age << endl;       // ERROR — private, never inherited
        }
};

// protected inheritance — public members become protected
class Player_Protected : protected Person{
    public:
        void show(){
            cout << first_name << endl;   // fine — now protected inside this class
            cout << last_name  << endl;   // fine — still protected
        }
};

// private inheritance — all inherited members become private
class Player_Private : private Person{
    public:
        void show(){
            cout << first_name << endl;   // fine — now private inside this class
            cout << last_name  << endl;   // fine — now private inside this class
        }
};


int main(){

    Player_Public p1;
    p1.show();
    cout << p1.first_name << endl;   // fine — first_name is still public

    Player_Protected p2;
    p2.show();
    // cout << p2.first_name << endl;   // ERROR — first_name became protected

    Player_Private p3;
    p3.show();
    // cout << p3.first_name << endl;   // ERROR — first_name became private

    return 0;
}
