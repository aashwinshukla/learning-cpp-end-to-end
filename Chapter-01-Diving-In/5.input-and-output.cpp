// std::cout =  printing data to the terminal. 
// std::cin =   reading data from the terminal. 
// std::cerr =  printing error to the console. 
// std::clog =  printing log messages to the console.

#include <iostream>
#include <string>

// using namespace std below helps in writing shorter code.
// now you don't have to write std:: everywhere.
using namespace std;

int main(){

    // printing out
    int number {12};
    cout << "The number is: " << number << endl;

    // error message
    cerr << "std::cerr output : something went wrong" << endl;

    // log message
    clog << "std::clog output : there is a log message" << endl;

    // taking input / reading data
    string name;
    cout << "Please type your last name: " << endl;
    cin >> name;
    cout << "hello " << name << " nice meeting you!" << endl;

    // if we want to grab multiple data in one line then:
    int age;
    string firstname;
    // btw you write std::string name; 
    // but since we have "using namespace std" we don't need to.

    cout << "Please enter your first name and age, add space between them: " << endl;
    cin >> firstname >> age;
    cout << "hello " << firstname << " you are " << age << " years old" << endl;

    // now what if someone puts their entire name in the input?
    // when they add a space for their last name it will try to put it into age and crash because age is an int.

    // that's why we use std::getline
    string full_name;
    cout << "Enter your full name: " << endl;
    getline(cin, full_name);

    // now whenever the user puts a space in the input it is still considered one single input.
    cout << "Hello " << full_name << "!" << endl;

    return 0;
}
