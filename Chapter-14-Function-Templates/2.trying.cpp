#include <iostream>
#include <string>
using namespace std;

// template declaration — telling the compiler this function exists before main
template <typename T> T maximum(T a, T b);

int main(){
    int a {10};
    int b {20};

    double c {34.4};
    double d {23.4};

    string e {"Hello"};
    string f {"World"};

    cout << "max int    : " << maximum(a, b) << endl;   // 20
    cout << "max double : " << maximum(c, d) << endl;   // 34.4
    cout << "max string : " << maximum(e, f) << endl;   // World (W > H alphabetically)

    return 0;
}

// template definition
template <typename T> T maximum(T a, T b){
    return (a > b) ? a : b;
}

// the template itself is NOT real C++ code — it's a blueprint
// the compiler reads it and generates actual functions based on how you call it:
// maximum(a, b)  where a,b are int    => compiler generates: int maximum(int a, int b)
// maximum(c, d)  where c,d are double => compiler generates: double maximum(double a, double b)
// maximum(e, f)  where e,f are string => compiler generates: string maximum(string a, string b)
// each generated version is called a template instance
