// stack memory = finite memory holds the local variable
//                the dev isnt in full control of the memory lifetime 
//                lifetiime is controlled by the scope mechanism

// Heap memory = finite additional memory used when you run out of stack memory 
//               the dev is in full controll of when the memory is allocated and when its released
//               lifetime is controlled explicitely through new and delete operators

// Dynamically allocate memory at run time and make a pointer point to it 

int *p_number{nullptr};
p_number = new int; // Dynamically allocate space for a space for a single int on the heap 
                    // This memory belongs to our program from now on.
                    // The system cant use it for anything else untill we retturn it.
                    // after this line executes, we will have a valid memeory location allocated
                    // the size of the allocated memory will be such that it can store the type pointed to by the pointer.

*p_number = 77;  // writing into dynamically allocated memory 
std::cout << std::endl;
std::cout << " Dynamically alloacting memeory : "<< std::endl;
std::cout << "P-number : " << *p_number << std::endl;

//....
//....

delete p_number;
p_number = nullptr;

// we used it and then relesed it and reinitialized it to nullptr

{
    {
        // any ptr here dies once the code crosses the braces 
        // this is what happens in stack

        // but if the ptr is in heap then until unless we want to release the memory \
        // even the braces cant decide wheather memory dies or not 
    }
}

