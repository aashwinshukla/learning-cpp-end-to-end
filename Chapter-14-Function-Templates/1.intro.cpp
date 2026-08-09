// function templates = a blueprint for a function that works with any data type
// instead of writing the same function multiple times for int, double, string etc.,
// you write it once and let the compiler generate the right version for whatever type you use

// syntax:
// template <typename T>
// T function_name(T a, T b){ ... }

// T is a placeholder — the compiler replaces it with the actual type when you call the function
// you can name it anything but T is the convention
