#include <iostream>
using namespace std;

int main(){

    // 1. store in a variable and call later
    auto func = [](){
        cout << "Hello world" << endl;
    };
    func();   // calling it by name


    // 2. call immediately — no name, runs right away
    [](){
        cout << "Hello world" << endl;
    }();


    // 3. immediately called with parameters
    [](double a, double b){
        cout << "a + b : " << (a + b) << endl;
    }(12.1, 5.7);


    // 4. returning a value and printing it directly
    cout << "result : " <<
    [](double a, double b){
        return (a + b);
    }(12.1, 5.7) << endl;
    // the misplaced << endl from the original was moved inside the cout chain


    // 5. explicitly specifying return type with ->
    auto result = [](double a, double b) -> double {
        return (a + b);
    }(12.1, 5.7);
    cout << "result : " << result << endl;

    return 0;
}
