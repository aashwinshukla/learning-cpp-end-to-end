#include <cstring>
#include <iostream>
using namespace std;

int main(){

    // 1. Length of string

    const char message1[] {"The sky is blue."};
    const char* message2  {"The sky is blue."};
    // array decays into a pointer when assigned to const char*

    cout << "message1 : " << message1 << endl;

    // strlen ignores the null character — gives actual string length
    cout << "strlen(message1)  : " << strlen(message1)  << endl;   // 16

    // sizeof includes the null character
    cout << "sizeof(message1)  : " << sizeof(message1)  << endl;   // 17

    // strlen still works on a decayed pointer
    cout << "strlen(message2)  : " << strlen(message2)  << endl;   // 16

    // sizeof on a pointer gives the size of the pointer itself (4 or 8 bytes), not the string
    cout << "sizeof(message2)  : " << sizeof(message2)  << endl;   // 8 (on 64-bit)


    // 2. Comparing strings

    const char* string_data1 {"Alabama"};
    const char* string_data2 {"Blabama"};

    // strcmp compares the full strings
    // returns 0 if equal, negative if first < second, positive if first > second
    cout << "strcmp  : " << strcmp(string_data1, string_data2) << endl;
    // A < B so result is negative

    // try equal strings
    const char* same1 {"Hello"};
    const char* same2 {"Hello"};
    cout << "strcmp equal : " << strcmp(same1, same2) << endl;   // 0

    // strncmp compares only the first n characters
    size_t n {3};
    cout << "strncmp first 3 : " << strncmp(string_data1, string_data2, n) << endl;
    // compares "Ala" vs "Bla" — negative because A < B


    // 3. Find first occurrence — strchr()
    // searches for a character and returns a pointer to its first occurrence
    // returns nullptr if not found

    const char sentence[] {"Hello World!"};
    const char* first = strchr(sentence, 'o');

    if(first){
        cout << "first 'o' found at index : " << (first - sentence) << endl;   // 4
    }


    // 4. Find last occurrence — strrchr()
    // same as strchr but finds the LAST occurrence instead

    const char* last = strrchr(sentence, 'o');

    if(last){
        cout << "last 'o' found at index : " << (last - sentence) << endl;   // 7
    }

    return 0;
}
