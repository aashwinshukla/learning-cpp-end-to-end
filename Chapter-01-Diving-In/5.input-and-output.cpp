// std::cout =  printing data to the terminal. 
// std::cin =   reading data from the terminal. 
// std::cerr =  printing error to the console. 
// std::clog =  printing log msg to the console.

#include<iostream>

// below text helps in writing code
// now you dont have to write std:: everywhere.
using namespace std;

// printing out
int number {12};
cout << "The number is: "<< number << endl;

// Error 
cerr << "std::cerr output : something went wrong" << endl;

// log message
clog << "std::clog output : there is a log messsage" << endl;

// taking input ir reading data


int age;
string name;
cout << "please type your last Name: "<<endl;
cin >> name;

cout<< "hello "<<name<<" nice meeting you!"<< endl;

// if we want to grab multiple data in one line then, 
int age; 
string name;
//btw you write std::string name; 
// but since i have using namespace std i have not.

cout << "Please enter your first name and age, add space between them " << endl;
cin >> name >> age;

cout << " hello "<< name << " You are " << age << " year old" << endl;


