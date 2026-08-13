// Polymorphism : a base pointer or reference managing derived class objects

// Shape is the base class
Shape* shape1 = new Circle;
Shape* shape2 = new Rectangle;
Shape* shape3 = new Oval;

//we can also use reference 
Shape& ref1 {&shape1};
Shape& ref2 {&shape2};
Shape& ref3 {&shape3};

// release the memory 

void draw_shape(Shape* shape_ptr){
    shape_ptr->draw();  // calls the right method for the kind of object passed in 
}

void draw_shape(const Shape& shape_ptr){
    shape_ptr->draw();  // calls the right method for the kind of object passed in 
}

//Storing base pointer in a collection like array 

Circle circle1(7.2, "circle1");
Oval oval1(13.2, 1.3, "oval1");
Circle circle2(11.2, "circle2");
// and so on .......

Shape* shapes3[]{&circle1, &oval1, &circle2, ......};

for(Shape* shape_ptr : shapes3){
    cout << "Inside the array , sizeof(*shape_ptr) : "<< sizeof(*shape_ptr) << endl;
    shape_ptr->draw();
    cout << endl;
}

