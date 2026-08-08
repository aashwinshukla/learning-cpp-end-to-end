#include <string>
#include <iostream>
using namespace std;

int main(){

    // empty string
    string full_name;

    // initializing with a string literal
    string planet {"Earth. where the sky is blue."};

    // initializing with another existing string
    string preferred_planet {planet};

    // initializing with part of a string literal — first 5 characters
    string message {"Hello there", 5};
    cout << "message          : " << message          << endl;   // Hello

    // initializing with multiple copies of a single character
    string weird_message {4, 'e'};
    cout << "weird_message    : " << weird_message    << endl;   // eeee

    // initializing with part of an existing string — start index, how many characters
    string greeting {"Hello World"};
    string saying_hello {greeting, 6, 5};
    cout << "saying_hello     : " << saying_hello     << endl;   // World

    // concatenation — joining two strings with +
    string first_name {"John"};
    string last_name  {"Snow"};
    string name = first_name + " " + last_name;
    cout << "name             : " << name             << endl;   // John Snow

    // appending with +=
    string sentence {"I love"};
    sentence += " C++";
    cout << "sentence         : " << sentence         << endl;   // I love C++

    // length of string
    cout << "length           : " << name.length()    << endl;   // 9

    // accessing individual characters
    cout << "first char       : " << name[0]          << endl;   // J
    cout << "at(1)            : " << name.at(1)       << endl;   // o
    // .at() is safer — throws an exception if index is out of range
    // [] does not check bounds

    // finding a substring
    string text {"Hello World"};
    size_t pos = text.find("World");
    if(pos != string::npos){
        cout << "'World' found at : " << pos          << endl;   // 6
    }
    // string::npos means not found

    // erasing part of a string — start index, how many characters
    string erase_me {"Hello World"};
    erase_me.erase(5, 6);
    cout << "after erase      : " << erase_me         << endl;   // Hello

    // replacing part of a string — start index, how many to replace, replacement string
    string replace_me {"Hello World"};
    replace_me.replace(6, 5, "C++");
    cout << "after replace    : " << replace_me       << endl;   // Hello C++

    // taking input into a string
    // cin >> only reads one word (stops at space)
    // use getline to read a full line including spaces
    // string input;
    // getline(cin, input);

    return 0;
}
