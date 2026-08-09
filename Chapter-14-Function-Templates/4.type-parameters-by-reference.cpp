// now using references 

#include <iostream>
#include <string>
using namespace std;

// template declaration — telling the compiler this function exists before main
template <typename T>const T& maximum(const T& a, const T& b);

int main(){
 
    double c {34.4};
    double d {23.4};

    cout << "Out - &a : " << &a << endl;
    double max1  = maximum(c,d);
    cout << "max : " << max1 << endl;   // 34.4
   

    return 0;
}

// template definition
template <typename T> const T& maximum(const T& a, const T& b){
    cout << "In - &a : " << &a << endl;
    return (a > b) ? a : b;
}

// just some definationor explaination here please
