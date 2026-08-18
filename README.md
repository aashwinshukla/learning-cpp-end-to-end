# Learning C++ End to End

A structured set of personal C++ notes written as `.cpp` files — each file covers one concept with comments, definitions, and beginner-friendly code examples. The notes follow a chapter-by-chapter progression from absolute basics all the way to object-oriented programming and modern C++ features.

---

## Structure

Each chapter is a folder. Each topic inside is a numbered `.cpp` file. The files are meant to be read as notes, not run as a full project — though most of them do compile and run correctly.

---

## Chapters

### Chapter 01 — Diving In
The very basics. Writing your first program, understanding statements, functions, errors, and I/O.
- First program and how to compile and run it
- Comments (single-line and multi-line)
- Errors and warnings (compile time, runtime, logic)
- Statements and functions
- Input and output (`std::cin`, `std::cout`, `std::getline`)

### Chapter 02 — Variables and Data Types
How C++ stores data. Every primitive type covered with sizes, ranges, and examples.
- Intro to data types
- Number systems (binary, octal, hex)
- Integers and integer modifiers (signed, unsigned, short, long)
- Fractional numbers (float, double, long double)
- Booleans, characters, auto
- Variable assignment and reassignment

### Chapter 03 — Operations on Data
Everything you can do with data — arithmetic, comparisons, logic, formatting, and math functions.
- Basic arithmetic operators
- Precedence and associativity
- Prefix and postfix increment/decrement
- Compound assignment operators (`+=`, `-=`, etc.)
- Comparison operators
- Logical operators (`&&`, `||`, `!`)
- Output formatting (`std::setw`, `std::setprecision`, `std::fixed`, etc.)
- Numeric limits (`std::numeric_limits<T>`)
- Math functions (`cmath`: `floor`, `ceil`, `pow`, `sqrt`, `sin`, etc.)

### Chapter 04 — Flow Control
Controlling what runs and when.
- `if`, `else if`, `else`
- Switch statements
- Ternary operator
- `break` and `continue`

### Chapter 05 — Loops
Repeating code efficiently.
- `for` loop
- `while` loop
- `do-while` loop

### Chapter 06 — Arrays
Storing multiple values under one name.
- Declaring and initializing arrays
- Getting array size (`std::size`, `sizeof` trick)
- Arrays of characters (C-style strings and null terminator)
- Array bounds and undefined behavior

### Chapter 07 — Pointers
One of the most important and tricky topics in C++.
- What a pointer is, declaring and using pointers
- Pointer to char and string literals
- Dynamic memory allocation (`new` and `delete`)
- Dangling pointers and how to avoid them
- What happens when `new` fails (`std::nothrow`, try/catch)
- Null pointers and null checks
- Memory leaks (3 common cases)
- Dynamic arrays (`new[]` and `delete[]`)

### Chapter 08 — References
A safer, simpler alternative to pointers in many cases.
- Declaring and using references
- References vs pointers (key differences)
- Const references

### Chapter 09 — Character Manipulation and Strings
Working with text in C++.
- Character manipulation (`cctype`: `isalpha`, `isdigit`, `toupper`, etc.)
- C-style string manipulation (`cstring`: `strlen`, `strcmp`, `strchr`, etc.)
- C-style string concatenation and copying (`strcat`, `strcpy`, etc.)
- `std::string` — declaring, using, searching, replacing, erasing

### Chapter 10 — Functions
Writing reusable, clean code with functions.
- One definition rule (ODR)
- Writing your first functions
- Declaration vs definition
- Splitting code across multiple files
- Pass by value, pass by pointer, pass by reference

### Chapter 11 — Getting Things Out of Functions
Two ways to return data from a function.
- Output parameters (passing by reference to write results back)
- Return values and how they are copied

### Chapter 12 — Function Overloading
Same function name, different behavior based on arguments.
- Overloading by number, type, and order of parameters
- What you cannot overload on (return type only)

### Chapter 13 — Lambda Functions
Anonymous functions — defined inline without a name.
- Declaring and calling lambdas
- Immediately invoked lambdas
- Capture list — by value and by reference
- Capturing all variables at once (`[=]` and `[&]`)

### Chapter 14 — Function Templates
Write one function that works for any type.
- Template syntax and how the compiler generates instances
- Type deduction and explicit type arguments
- Passing template parameters by reference
- Template specialization for specific types

### Chapter 15 — Concepts (C++20)
Constraining what types a template accepts.
- Built-in concepts (`std::integral`, `std::floating_point`, etc.)
- All 4 syntax styles for applying concepts
- Building your own concepts with `requires`
- 4 kinds of requirements (simple, nested, compound, type)
- Combining concepts with `&&` and `||`
- Constrained `auto`

### Chapter 16 — Classes
The foundation of object-oriented programming in C++.
- What a class is, writing your first class
- Constructors (default and parameterized)
- Defaulted constructors (`= default`)
- Getters and setters (encapsulation)
- Splitting classes across multiple files and header guards
- Managing objects through pointers (`->` operator)
- Destructors
- Constructor and destructor call order
- The `this` pointer
- Struct vs class
- Size of class objects and memory padding

### Chapter 17 — Inheritance
Building new classes on top of existing ones.
- What inheritance is and the base/derived class relationship
- First inheritance example (Person → Player)
- Protected member access
- Base class access specifiers (public, protected, private inheritance)
- Closing inheritance with `final` on class and method
- Private inheritance and resurrecting members with `using`
- Constructor and destructor call order in inheritance chains
- Passing data to base constructors via initializer lists
- Copy constructors in inheritance
- Inheriting base constructors
- Reused symbols (name hiding vs overriding)

### Chapter 18 — Polymorphism
One interface, many implementations. The cornerstone of OOP.
- What polymorphism is and why it matters
- Static binding (the problem without `virtual`)
- Dynamic binding with `virtual` functions
- Size overhead of polymorphic objects and object slicing
- Storing polymorphic objects in collections (raw pointers and smart pointers)
- The `override` keyword and why you should always use it
- Overriding vs overloading vs hiding
- Polymorphism at different levels of the hierarchy
- Static members with polymorphism
- The `final` specifier on methods and classes
- Virtual functions with default arguments (and why they're tricky)
- Virtual destructors (and why skipping them causes memory leaks)
- `dynamic_cast` for safe downcasting
- Never call virtual functions from constructors or destructors
- Pure virtual functions and abstract classes
- Abstract classes as interfaces

### Chapter 19 — STL (Standard Template Library)
Ready-made containers and algorithms built into C++ — no need to write your own data structures.
- What the STL is — containers, algorithms, iterators
- `pair` — storing two values under one name, nested pairs, arrays of pairs
- `vector` — dynamic array, iterators, insert, erase, push/pop, swap
- `list` — doubly linked list, push/pop from both ends
- `stack` — LIFO, push, pop, top
- `queue` — FIFO, push, pop, front, back; `priority_queue` (max heap and min heap)
- `set`, `multiset`, `unordered_set` — unique/sorted/unsorted collections
- `map`, `multimap`, `unordered_map` — key-value pairs sorted/unsorted
- Sorting with `std::sort`, custom comparators, descending order
- Other built-in algorithms — `count`, `find`, `accumulate`, `reverse`, `unique`, `binary_search`, `lower_bound`, `upper_bound`, `next_permutation`, `rotate`

---

## How to Compile and Run Any File

You need a C++ compiler installed (`g++` via MinGW on Windows).

```powershell
cd "path\to\chapter-folder"
g++ filename.cpp -o output
.\output.exe
```

For C++20 features (Chapter 15 — Concepts):
```powershell
g++ -std=c++20 filename.cpp -o output
.\output.exe
```

---

## Notes

- All `.exe` files are ignored via `.gitignore`
- Files are notes first, programs second — some intentionally show compile errors in comments
- Each file is self-contained and independent from others in the same chapter
