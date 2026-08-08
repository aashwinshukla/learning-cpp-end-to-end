// null pointer safety — making sure a pointer holds a valid address before using it

#include <iostream>

int main(){

    int* p_number {nullptr};

    // method 1: explicit comparison
    if(p_number != nullptr){
        std::cout << "*p_number : " << *p_number << std::endl;
    }else{
        std::cout << "p_number is null, skipping" << std::endl;
    }

    // method 2: pointer as a bool (nullptr = false, any valid address = true)
    if(p_number){
        std::cout << "*p_number : " << *p_number << std::endl;
    }

    // calling delete on a nullptr is completely safe — nothing happens
    delete p_number;   // no crash, no problem

    return 0;
}
