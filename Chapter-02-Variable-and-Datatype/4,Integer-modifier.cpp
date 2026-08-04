// to store negative and positive integers
signed int variable_name {-300};
// size is 4 bytes
// range is [-2,147,483,648  ,  2,147,483,647]


// to store only positive integers
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

// all these modifiers only work on integer types, not on decimals like float or double.


// NOTE: using signed and unsigned is not necessary to store negative integers.
// it only helps to be explicit about what you want.
// int num {-300}; will also work fine.
