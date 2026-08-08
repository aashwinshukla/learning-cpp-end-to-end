// references vs pointers — key differences

// REFERENCES
// no dereferencing needed for reading or writing
// cannot be changed to refer to a different variable after initialization
// must be initialized at declaration — a dangling reference is not possible

// POINTERS
// must dereference with * to read or write the value
// can be changed to point to a different address at any time
// can be declared uninitialized (will contain a garbage address — dangerous)
// can be set to nullptr, references cannot

// general rule:
// prefer references when you just need an alias and don't need to reassign
// use pointers when you need to reassign, or when nullptr is a valid state
