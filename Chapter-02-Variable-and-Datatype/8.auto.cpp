// auto : lets the compiler deduce the type automatically from the value you give it.

auto var1 {12};     // deduced as int
auto var2 {13.0};   // deduced as double
auto var3 {14.0f};  // deduced as float   (the f suffix tells the compiler it's a float)
auto var4 {15.0l};  // deduced as long double  (the l suffix tells the compiler it's a long double)
auto var5 {'e'};    // deduced as char    (single quotes make it a char)

// auto is useful when the type is obvious from the value,
// or when the type name is very long and you want cleaner code.
