// now for while loop 

const unsigned int COUNT {10};

unsigned int i {0};

while( i < COUNT){
    std::cout << "I love C++"<< std::endl;
    ++i;
}

// here as you can see a single condition the parenthesis and increment inside the code itself is all we need to use while loop;
// it breaks once the condition is false.
// it checks the condition => runs code => increment => repeat 

// we can also write..
while(true){
    //code
    break;
}

// here the break statement is what, that stops the loop otherwise it will keep running

