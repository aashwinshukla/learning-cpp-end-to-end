int int_value {45};
double double_value {33.65};

int& reference_to_int_value_1 {int_value};  //Assign throught initialization
int& reference_to_int_value_2 = int_value;   //Assign throught assignment 
double& reference_to_double_value_1 {double_value};

// using reference is just like using the originl varible itself

// now if we modify the reference value...
reference_to_int_value_1 = 55;
// we will see modification in original as well.
// and vice versa

