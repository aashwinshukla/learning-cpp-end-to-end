// we can reuse the same name for member varuiable, tyopes or functions 
// in the derived variable qwhich were originally used in the base class

#include <iostream>
#include "child.h"

int main(){
    Child child (33);
    child.print_var(); // call the method in child 
    child.Paremt::print_var(); // calls the method in parent 

    cout << "" <<endl;
    child.show_value();
    return 0;
}

// add anything that might be neccessay no this notes as well
