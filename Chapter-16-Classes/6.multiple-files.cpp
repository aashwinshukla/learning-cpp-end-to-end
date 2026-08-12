// as classes grow it's better to split them across multiple files
// this keeps things organized and makes the code reusable

// typical structure:
// constants.h  — holds shared constants like PI
// cylinder.h   — holds the class declaration
// cylinder.cpp — holds the class method definitions
// main.cpp     — includes the headers and uses the class

// in main.cpp:
// #include "constants.h"
// #include "cylinder.h"

// use quotes "" for your own project headers
// use angle brackets <> for standard library headers


// IMPORTANT — header guards:
// if a header is included in multiple files, the compiler would see it multiple times
// header guards prevent it from being processed more than once

// put this at the top of every .h file:
// #ifndef CYLINDER_H
// #define CYLINDER_H
// ... your class declaration ...
// #endif

// or use the shorter modern version (supported by all major compilers):
// #pragma once
