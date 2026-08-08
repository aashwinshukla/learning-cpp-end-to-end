// memory leak = when you lose access to heap memory that was never deleted
// the memory stays reserved for your program but you can no longer free it

#include <iostream>

int main(){

    // case 1: overwriting a pointer before deleting
    int* p_number {new int{67}};
    int number {69};
    p_number = &number;
    // p_number now points to a stack variable
    // the original heap allocation (int{67}) is lost — memory leaked
    // fix: delete p_number before reassigning it


    // case 2: double allocation (reassigning new without deleting first)
    int* p_number1 {new int{60}};
    p_number1 = new int{44};
    // the first allocation (int{60}) is leaked
    // fix: delete p_number1 before assigning a new allocation


    // case 3: pointer goes out of scope without being deleted
    {
        int* p_number2 {new int{67}};
        // p_number2 dies here when the block ends
        // but the heap memory it pointed to is NOT released — memory leaked
        // fix: delete p_number2 before the closing brace
    }

    return 0;
}
