// A statement is a basic unit of computation in a c++ program
// statements ends with a semicolon in C++ (;)

// std::cout<< "Hello World!" << std::endl;

// as you can see above line is a statement and it ends with semicolon

// IMPORTANT :  code goes from top to bottom so the sequence does matter and later we will learn about calling of function and making their sequence make sense

// function is something which give output for the input given.

/*

int firstnumber = 12;
int secondnumber = 2;

int sum = firstnumber + secondnumber;

std::cout <<" the sum of both the number is: "<< sum << std::endl; 

*/


// sum is the output and firstnumber and secondnumber are input to the function
// firstnumber and secondnumber are variable which store value 
// int is the data type of the value ie integer

// so to write function 

#include <iostream>

int addnumber(int first_para, int second_para){
    int sum = first_para + second_para;
    return sum;
    //here it returns sum to the main function.
}
// here int addnumber is  fuction taking firstnumber and secondnumber as input


int main(){
    int firstnumber = 12;
    int secondnumber = 2;

    int sum = addnumber(firstnumber, secondnumber);
    // here we are calling addnumbers by sending the input in the exact order we declared the parameter in the brackets of function addnumber at top
    //int sum will take in the returned value of sum. 

    
    // sum = addnumber(69, 67);
        
    //we can directly put the input inside the brackets as well intead of variable/parameter.
    

    std::cout <<" the sum of both the number is: "<< sum << std::endl;
    std::cout <<" the sum of both the number is: "<< addnumber(69, 67) << std::endl;
    // or we can write function and parameter here instead of sum.
    
    return 0;
}