// if we want to calculate a bigger problem that has multiple operations like

// a + b * c - d/e - f + g

// in the above equation we might want to solve different sections in different sequence/order
// this is where precedence and associativity come in.

// precedence   : which operator to do first
// associativity: which direction to start solving (left to right or right to left)

// all you need to remember: division and multiplication come before addition and subtraction,
// and within the same level it goes left to right.
// C++ follows these rules and you can find the full table online.

// we can use parentheses to make it clear which operation we want to do first.
// example: (a + b) * c  will add first, then multiply.
