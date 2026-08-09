// when your project grows, you split code across multiple files
// function definitions go in .cpp files
// function declarations go in .h (header) files

// to use functions from other files, include their header:

// #include <iostream>       <- angle brackets for standard library headers
// #include "compare.h"      <- quotes for your own project headers
// #include "operations.h"

// this makes everything declared in those headers available in the current file.

// NOTE: #include <strings> does not exist — the correct header is #include <string>
// standard string functions are in <cstring> (C-style) or <string> (std::string)
