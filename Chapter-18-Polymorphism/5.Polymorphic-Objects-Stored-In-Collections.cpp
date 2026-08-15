Circle circle1(7.2, "circle1");
Oval oval1(13.2, 1.3, "oval1");
Circle circle2(11.2, "circle2");
// and so on .......

Shape shapes1[]{circle1, oval1, circle2, ......};

for(Shape s : shapes3){
    cout << "Inside the array , sizeof(shape) : "<< sizeof(shape) << endl;
    Shape * shape_ptr = &s;
    shape_ptr->draw();
    cout << endl;
}

// here when use pointer to call draw as we did 
// the problem is we are assigning it to type Shape in other words 
// object slicing will happen

// once that happens you will loose the data permanently and you will never get that 
// so storing objects like this will slice the data 

const Shape& shape2[] {circle1, oval1, circle2, ......}
// if you try like above syntax the code will not even pass compilation because it is wrong 
// because we cant store reference in a collection


Shape* shapes3[]{&circle1, &oval1, &circle2, .....};
// this will work fine 
// this is fundamental of polymosrphism 
// using base pointer to manage derived objects 

// we can also use smart pointer which is nothing but wrapper on the raw pointer 
shared_ptr<Shape> shape4[]{make_shared<Circle>(12.2, "Circle4"), make_shared<Oval>(10.0,20.0,"Oval4")};
