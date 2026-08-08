// concatenation = joining two strings together end to end
// copying       = making a copy of a string into another char array

#include <cstring>
#include <iostream>
using namespace std;


int main(){

    // 1. strcat() — joins src to the end of dest
    // dest must be large enough to hold both strings + null terminator

    char dest[50]  {"Hello "};
    char src[50]   {"World!"};

    strcat(dest, src);
    cout << "after strcat  : " << dest << endl;   // Hello World!

    strcat(dest, " Goodbye World!");
    cout << "after strcat  : " << dest << endl;   // Hello World! Goodbye World!


    // 2. strncat() — same as strcat but only appends the first n characters of src

    char dest2[50] {"Hello "};
    char src2[50]  {"World!"};

    size_t n {3};
    strncat(dest2, src2, n);
    cout << "after strncat : " << dest2 << endl;   // Hello Wor
    // only first 3 characters of src2 ("Wor") were appended


    // 3. strcpy() — copies src into dest, overwrites whatever was in dest
    // dest must be large enough to hold src + null terminator

    char dest3[50] {"old text"};
    char src3[50]  {"new text"};

    cout << "dest3 before  : " << dest3 << endl;   // old text
    strcpy(dest3, src3);
    cout << "dest3 after   : " << dest3 << endl;   // new text


    // 4. strncpy() — same as strcpy but only copies the first n characters
    // be careful: if n is less than the length of src, no null terminator is added
    // always manually add '\0' at the end to be safe

    char dest4[50] {"old text"};
    char src4[50]  {"new text"};

    size_t n2 {3};
    strncpy(dest4, src4, n2);
    dest4[n2] = '\0';   // manually null terminate
    cout << "dest4 after strncpy : " << dest4 << endl;   // new

    return 0;
}
