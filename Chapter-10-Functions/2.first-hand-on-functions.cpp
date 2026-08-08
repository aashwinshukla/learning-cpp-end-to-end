// Function: A reusable piece of code that can take a number of optional inputs and produce some desirable output

// syntax:

return_type function_name(param1, param2, ...){
    //operations 
    return return_type
}

// function signature is function name and its parameter

// calling function
result_var = function_name(arg1, arg2)

//or..
function_name()  // if no parameter


//below function doesnt take any arg or return anything 
void say_hello(){
    cout<<"hello world"<<endl;
    return;
}
//void in type lessand doesnt return anything 

int lucky_number(){
    return 99;
}
// takes no input but return int value

// very important 
// any changes to parameter (like adding subtracting or anything ) that occurs inside of the function
// happens on the copies of the parameter and the parameter will go back to normal unit unless you return those copies to the main funcion

// eg if parameter are 5 and 6 stored in num1 and num2 
// and the function is called which increase the input by 1 

void num_change(int num1, int num2){
    ++num1;
    ++num2;
    return;
}

int main(){
    int num1 {5};
    int num2 {6};

    num_change(num1, num2);

    cout<< "Num1 : " << num1 << endl;
    cout<< "Num2 : " << num2 << endl;

    return 0;
}

// in above code we will get 5 and 6 again because we never returned their value to the main 

#include <iostream>
using namespace std;

void num_change(int &num1, int &num2) {
    ++num1;
    ++num2;
}

int main() {
    int num1 {5};
    int num2 {6};

    num_change(num1, num2);

    cout << "Num1 : " << num1 << endl; // Output: 6
    cout << "Num2 : " << num2 << endl; // Output: 7

    return 0;
}
// this above code fixes that issue. because we are playing with the reference (&)
