// when 'new' fails to allocate dynamic memory from the heap,
// it throws a std::bad_alloc exception and your program crashes
// this is very rare but worth knowing how to handle

#include <iostream>

int main(){

    // method 1: handle with try/catch
    for(size_t i{}; i < 100000000000000; ++i){
        try{
            int* lots_of_int {new int{1000000000}};
        }catch(std::exception& ex){
            std::cout << "caught exception : " << ex.what() << std::endl;
            break;
        }
    }

    // method 2: use std::nothrow
    // instead of throwing an exception, new returns nullptr on failure
    // so you can check for nullptr safely
    int* p_number {new(std::nothrow) int{5}};
    if(p_number){
        std::cout << "allocation succeeded: " << *p_number << std::endl;
        delete p_number;
        p_number = nullptr;
    }else{
        std::cout << "allocation failed" << std::endl;
    }

    return 0;
}
