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

    maximum(a, b) << endl;  //int type deduced 
    maximum(c, d) << endl;  // double typr deduced
    maximum(e, f) << endl;  // string type deduced

    maximum<double>(c,d);   // here we are explicitly telling wewant double
    maximum<double>(a,c);   // works even if parameter are different type
    maximum<double>(a,e);   // ERRROR : cant convert string to double


    return 0;
}

// template definition
template <typename T> T maximum(T a, T b){
    return (a > b) ? a : b;
}