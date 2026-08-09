// now lets see what is capture list

//Capture lists
double a{10};
double b{20};

auto func = [a,b](){
    std::cout <<" ressult : " << a + b << std::endl;
};
func();

//to give context from outside we can use capture list


int c{42};

auto func = [c](){
    std::cout << "Outer value : "<< c << std::endl;
};

for(size_t i{}; i<5; ++i){
    std::cout<< "inner value : "<< c << std::endl;
    func();
    ++c;
}
// inner value keep increasing but outter value stays same  
// capturing by value : what we have in the lambda function is a copy

// we can also capture by reference using &c
// here both value will change

