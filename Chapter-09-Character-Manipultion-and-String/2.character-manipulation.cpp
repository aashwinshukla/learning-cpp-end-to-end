#include <cctype>
#include <iostream>
#include <iterator>
using namespace std;

int main(){

    char message[] {"Hello there, how are you? 123"};

    // 1. Check Alphanumeric — isalnum()
    // returns non-zero if the character is a letter or digit, 0 if not
    cout << isalnum('C') << endl;   // non-zero (alphanumeric)
    cout << isalnum('^') << endl;   // 0 (not alphanumeric)


    // 2. Check Alphabetic — isalpha()
    // returns non-zero if the character is a letter (a-z or A-Z), 0 if not
    cout << isalpha('C') << endl;   // non-zero
    cout << isalpha('3') << endl;   // 0 (digit, not a letter)


    // 3. Check Blank — isblank()
    // returns non-zero if the character is a space or tab
    int blank_count {0};
    for(size_t i{0}; i < size(message); ++i){
        if(isblank(message[i])){
            cout << "blank at index : " << i << endl;
            ++blank_count;
        }
    }
    cout << "total blanks : " << blank_count << endl;


    // 4. Check Lowercase / Uppercase — islower() and isupper()
    int lower_count {0};
    int upper_count {0};
    for(size_t i{0}; i < size(message); ++i){
        if(islower(message[i])){
            ++lower_count;
        }else if(isupper(message[i])){
            ++upper_count;
        }
    }
    cout << "lowercase letters : " << lower_count << endl;
    cout << "uppercase letters : " << upper_count << endl;


    // 5. Check Digit — isdigit()
    // returns non-zero if the character is 0-9
    int digit_count {0};
    for(size_t i{0}; i < size(message); ++i){
        if(isdigit(message[i])){
            cout << "digit found : " << message[i] << " at index " << i << endl;
            ++digit_count;
        }
    }
    cout << "total digits : " << digit_count << endl;


    // 6. Convert to Lowercase / Uppercase — tolower() and toupper()
    cout << "original : " << message << endl;

    for(size_t i{0}; i < size(message); ++i){
        cout << static_cast<char>(tolower(message[i]));
    }
    cout << endl;   // hello there, how are you? 123

    for(size_t i{0}; i < size(message); ++i){
        cout << static_cast<char>(toupper(message[i]));
    }
    cout << endl;   // HELLO THERE, HOW ARE YOU? 123

    return 0;
}
