// array of characters (c-style strings)

#include <iostream>
using namespace std;

int main(){

    // storing characters one by one
    char message[5] {'H', 'e', 'l', 'l', 'o'};

    cout << "message : ";
    for(auto c : message){
        cout << c;
    }
    cout << endl;

    // just like int arrays, char arrays can be modified and you can use size() on them too

    // if you want to print the whole array at once with cout,
    // you need a null terminator '\0' at the end to tell cout where the string ends
    // without it, cout will keep reading memory past the array and print garbage
    char message2[6] {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "message2 : " << message2 << endl;

    // the best and easiest way to initialize a char array — compiler adds '\0' automatically
    char message3[] {"Hello"};
    cout << "message3 : " << message3 << endl;

    return 0;
}
