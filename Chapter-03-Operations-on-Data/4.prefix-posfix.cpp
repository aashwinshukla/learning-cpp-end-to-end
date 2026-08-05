//increment and decrement 

int value {1};

value = value + 1; 
std::cout<<"value is: "<< value<< std::endl;
// this will give 2 

value = value - 1; 
std::cout<<"value is: "<< value<< std::endl;
// this will give 0

// we can also use 
value++
//or 
value--
// this will do the same that happended in the first code we wrote
//but things changesa a bit 
std::cout<<"it will stay : "<< value++ << std::endl;
std::cout<<"now it will be : "<< value << std::endl;
// is first output it remains 5 but later in second output it turns 6. 
// this is postfix increment/decrement

//we can also use 
++value
//or 
--value 
// here when you take output
std::cout<<"value : "<< ++value << std::endl;
// here it increase it on the getgo and we will directly get 6.
//this is prefix increment/decrement


