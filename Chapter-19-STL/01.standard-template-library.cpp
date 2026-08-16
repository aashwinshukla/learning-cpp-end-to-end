// STL = Standard Template Library
// a collection of ready-made, generic classes and functions built into C++
// so you don't have to write common data structures and algorithms from scratch

// the STL has 3 main components:

// 1. CONTAINERS
//    classes that store and organize collections of data
//    eg: vector, list, map, set, stack, queue, deque, array
//    each container has different trade-offs for speed, memory, and access pattern

// 2. ALGORITHMS
//    functions that operate on containers — searching, sorting, transforming data
//    eg: std::sort, std::find, std::count, std::copy, std::reverse, std::for_each
//    they work on any container through iterators, not tied to a specific type

// 3. ITERATORS
//    objects that act like pointers — they let algorithms traverse containers
//    without knowing the internal structure of the container
//    eg: begin(), end(), rbegin(), rend()
//    the bridge between containers and algorithms

// why use STL:
// — saves time, no need to implement your own linked list, hash map, sorting etc.
// — well tested, optimized, and part of the C++ standard
// — works with any data type through templates
// — consistent interface across all containers

// a quick taste of what's coming:
// #include <vector>    — dynamic array
// #include <map>       — key-value pairs (sorted)
// #include <set>       — unique elements (sorted)
// #include <algorithm> — sort, find, count etc.
// #include <iterator>  — iterator utilities


// we will be using #include <bits/stdc++.h> to get all library at the same time 
