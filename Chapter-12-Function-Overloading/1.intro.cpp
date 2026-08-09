// function overloading = having multiple functions with the same name
// but different parameters — the compiler picks the right one based on what you pass

// you can overload based on:
// 1. number of parameters  — add(int a) vs add(int a, int b)
// 2. types of parameters   — add(int a, int b) vs add(double a, double b)
// 3. order of parameters   — func(int a, double b) vs func(double a, int b)

// NOTE: overloading based only on return type is NOT allowed
// the compiler uses the parameters to decide which version to call, not the return type
