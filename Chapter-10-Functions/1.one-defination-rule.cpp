// one definition rule (ODR):
// a variable or function can only be DEFINED once in the entire program.
// it doesn't matter where — same file or across multiple files — defining it twice is an error.

// a DECLARATION is fine to have multiple times (just telling the compiler it exists).
// a DEFINITION is where the actual implementation or value lives — only once allowed.

// the only exception is classes/structs:
// the same class can be defined in multiple translation units (files),
// but the definitions must be identical.
