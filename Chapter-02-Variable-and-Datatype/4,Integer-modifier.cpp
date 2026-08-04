// to store negative integers
 signed int variable_name {-300};
// size is 4 bytes
// range is [-2,147,483,648  ,  -2,147,483,648]


// to store positive integers
 unsigned int variable_name {14};
// size is 4 bytes
// range is [0, 4,294,967,295]



// we can use short to decrease size
short signed int variable_name {};
short unsigned int variable_name {};
// this creates 2 bytes size

// we can use long to increase size
long signed int variable_name {};
long unsigned int variable_name {};
// this creates 4 or 8 bytes size

long long signed int variable_name {};
long long unsigned int variable_name {};
// this creates 8 bytes size

// all these modification cant work on decimals lile fraction value.


// NOTE: using signed and unsigned is not nessecary to store negative int
// it only helps to specify what you want
// int num {-300}; wil also work
