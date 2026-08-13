// you can reuse the same name for member variables, types, or functions
// in a derived class that were originally used in the base class
// the derived version HIDES the base class version — it doesn't override it

// to call the base class version explicitly, use the scope resolution operator:
// object.BaseClass::method();

#include <iostream>
using namespace std;

class Parent{
    public:
        int value {100};

        void print_var(){
            cout << "Parent::print_var() — value : " << value << endl;
        }
};

class Child : public Parent{
    public:
        int value {999};   // hides Parent::value

        void print_var(){
            // this hides Parent::print_var()
            cout << "Child::print_var() — value : " << value << endl;
        }

        void show_value(){
            cout << "Child value   : " << value         << endl;   // Child's value
            cout << "Parent value  : " << Parent::value << endl;   // explicitly access Parent's value
        }
};

int main(){
    Child child;

    child.print_var();           // calls Child's version
    child.Parent::print_var();   // explicitly calls Parent's version

    child.show_value();          // shows both values

    return 0;
}

// output:
// Child::print_var() — value : 999
// Parent::print_var() — value : 100
// Child value   : 999
// Parent value  : 100

// NOTE: this is NAME HIDING, not overriding
// overriding requires the virtual keyword (covered in polymorphism chapter)
// without virtual, the base version is just hidden, not replaced
