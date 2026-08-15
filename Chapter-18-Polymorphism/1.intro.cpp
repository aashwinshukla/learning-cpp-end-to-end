// polymorphism = a base class pointer or reference managing derived class objects
// and calling the right method based on the actual object type at runtime

// why it's useful:
// without polymorphism, a Shape* always calls Shape::draw() no matter what it points to
// with polymorphism, the same Shape* calls Circle::draw(), Oval::draw() etc. correctly

// two types:
// static binding  (compile time) — compiler decides which function to call based on pointer type
// dynamic binding (runtime)      — compiler decides based on the actual object type using 'virtual'

// to enable polymorphism:
// 1. mark the base class method as virtual
// 2. use a base class pointer or reference to manage derived objects
