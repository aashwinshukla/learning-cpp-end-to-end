// declaring pointers
int* p_number{};  // can only store an address of a variable of type int 
double* p_fractional_number{};  // can only store an adress of a variable of type double

// Explicitely initializing to nullptr

int* p_number1 {nullptr};
int* p_fractional_number1 {nullptr};

// all ptr are of same size

// ptr symbol (*) can be anywhere between variable and data type left right or center .
int int_var{43};
int* p_int{&int_var};  // the adress of operator (&).

std::cout << "p_int (Address in memory) : " << p_int << std::endl;

p_int = &int_var1; // Assign a different address to a pointer is very legal in C++
// data type has to be same thats the point to remember
