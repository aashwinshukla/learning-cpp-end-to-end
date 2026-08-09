// capture list = lets the lambda use variables from the surrounding scope
// without a capture list, the lambda can only use its own parameters

#include <iostream>
using namespace std;

int main(){

    // capturing by VALUE — lambda gets a copy of the variable at the time of creation
    double a {10};
    double b {20};

    auto func = [a, b](){
        cout << "result : " << a + b << endl;   // uses copies of a and b
    };
    func();   // 30


    // example showing copy vs original diverge over time
    int c {42};

    auto func2 = [c](){
        cout << "outer value (copy) : " << c << endl;
    };

    for(size_t i{}; i < 5; ++i){
        cout << "inner value : " << c << endl;
        func2();   // always prints 42 — the copy never changes
        ++c;
    }
    // inner value keeps increasing but the captured copy stays 42


    // capturing by REFERENCE — lambda uses the actual variable, not a copy
    int d {42};

    auto func3 = [&d](){
        cout << "outer value (ref) : " << d << endl;
    };

    for(size_t i{}; i < 5; ++i){
        cout << "inner value : " << d << endl;
        func3();   // both values match and increase together
        ++d;
    }

    return 0;
}
