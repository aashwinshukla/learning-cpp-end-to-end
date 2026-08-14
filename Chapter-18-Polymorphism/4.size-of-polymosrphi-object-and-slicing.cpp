// dynmic binding is not free 
// you pay it up with your memory

cout << "sizeof(Shape) : "<< sizeof(Shape) << endl;
cout << "sizeof(Oval) : "<< sizeof(Oval) << endl;
cout << "sizeof(Circle) : "<< sizeof(Circle) << endl;

// object slicing 

Shape shape1("Shape1");
Oval oval1(2.0, 3.0, "Oval1");
Circle circle1(3.3, "Circle1");

Shape shape2 = circle1;
// assigning circle object to shape object
// take example of an onion with multiple layer 
// here the inner most layer is the shape class
// then middle is Oval and outter most is Circle

// so when you are trying asdigning circle1 object to shape2 object 
// it is like trying to assign an entire onion to just inner most part of another onion

// so what happens is compiler will strip off Circle and Oval layer and 
// now circle1 innermost layer, ie shape, gets assigned to shape2
// this is called slicing which occurs becouse one side doesnt have enough memory as the other side

