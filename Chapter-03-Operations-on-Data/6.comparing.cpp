#include <iostraem>
using namespace std

int main(){
    int number1 {45};
    int number2 {60};

    cout<< "number 1: "<< number1 << endl;
    cout<< "number 2: "<< number2 << endl;

    cout << " camparing both numbers "<< endl;

    cout<< boolalpha; // makes bool show up as true/ false instead of 0/1

    cout<< "number 1 < number 2: "<< (number1 < number2) << endl;
    cout<< "number 1 > number 2: "<< (number1 > number2) << endl;
    cout<< "number 1 <= number 2: "<< (number1 <= number2) << endl;
    cout<< "number 1 >= number 2: "<< (number1 >= number2) << endl;
    cout<< "number 1 == number 2: "<< (number1 == number2) << endl;
    cout<< "number 1 != number 2: "<< (number1 != number2) << endl;

    return 0;

}   
