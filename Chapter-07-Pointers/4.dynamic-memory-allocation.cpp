// stack memory = limited memory, holds local variables
//                the developer is NOT in full control of its lifetime
//                lifetime is controlled by scope — variable dies when it goes out of scope

// heap memory  = larger pool of memory
//                the developer IS in full control of when memory is allocated and released
//                lifetime is controlled explicitly through new and delete operators

#include <iostream>

int main(){

    // dynamically allocating memory at runtime
    int* p_number {nullptr};
    p_number = new int;   // allocates space for a single int on the heap
                          // this memory belongs to our program from this point
                          // the system can't use it for anything else until we release it

    *p_number = 77;       // writing into dynamically allocated memory
    std::cout << "p_number : " << *p_number << std::endl;   // 77

    // always delete heap memory when you're done with it
    delete p_number;
    p_number = nullptr;   // reset to nullptr after deleting to avoid dangling pointer

    // scope example — stack vs heap behavior
    {
        {
            // any local variable here dies once the code exits these braces (stack)
            // but heap memory allocated inside here does NOT die with the braces
            // it stays allocated until you explicitly call delete
            // forgetting to delete = memory leak
        }
    }

    return 0;
}
