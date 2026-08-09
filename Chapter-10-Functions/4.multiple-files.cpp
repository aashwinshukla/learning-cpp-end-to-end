// when we have multiple files in the programwhich inculudes different source and function and you want to use them in one single translation unit

// lets say file one is called compare.h
// and the second file is called operations.h

// to use them write the syntax as below 

#include <iostream>
#include <strings>
......
......//all the required libraries

#include "compare.h"
#include "operations.h"

// this way you will be able to use their context in your 
// current translation unit

//defination of function can go into a .cpp file 
// and the function declaration can go in a .h file