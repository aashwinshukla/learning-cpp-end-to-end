// template specialization = defining a custom version of a template for a specific type
// the general template handles all types, but sometimes one type needs different behavior
// specialization lets you override the template for just that one type

#include <iostream>
#include <string>
using namespace std;

// general template — works for all types
template <typename T>
T maximum(T a, T b){
    cout << "general template called" << endl;
    return (a > b) ? a : b;
}

// specialization for const char* — C-style strings
// the general template would compare pointers (addresses), not the actual string content
// so we specialize it to use strcmp instead
template <>
const char* maximum<const char*>(const char* a, const char* b){
    cout << "specialization for const char* called" << endl;
    return (strcmp(a, b) > 0) ? a : b;
}

int main(){

    // uses the general template
    int x {10};
    int y {20};
    cout << "max int    : " << maximum(x, y) << endl;   // 20

    double c {34.4};
    double d {23.4};
    cout << "max double : " << maximum(c, d) << endl;   // 34.4

    // uses the general template — compares std::string content correctly with >
    string s1 {"Hello"};
    string s2 {"World"};
    cout << "max string : " << maximum(s1, s2) << endl;   // World

    // uses the specialization — const char* needs strcmp to compare content
    const char* cs1 {"Hello"};
    const char* cs2 {"World"};
    cout << "max c-str  : " << maximum(cs1, cs2) << endl;   // World

    // without the specialization, maximum(cs1, cs2) would compare memory addresses
    // not the actual string content — giving unpredictable results

    return 0;
}

// syntax recap:
// template <>                          <- empty angle brackets = this is a specialization
// const char* maximum<const char*>(...)  <- specify the type you're specializing for
