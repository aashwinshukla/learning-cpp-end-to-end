#include <string>
using namespace std;

int main(){
    string full_name; //empty string 
    string planet {"Earth. where the sky is blue."}; //initiallizing with string literal
    string prefered_planet {planet};  // initializing with other existing string 
    string message {"Hello there", 5};  //initialize with part of string literal
                                        // contains hello
    string weird_message{4, 'e'};  //initiallize with multiple copies of a char
                                    // contains eeee
    string greeting{"Hello World"};  
    string saying_hello{greeting,6,5};  //initializing with part of an existing std::string
                                        // starting at index 6,taking 5 character
                                        // will contain World.


    return 0;
}