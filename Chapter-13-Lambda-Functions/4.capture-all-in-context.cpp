
int c{42};
//......
//......

auto func = [=](){
    std::cout << "Outer value : "<< c << std::endl;
};

for(size_t i{}; i<5; ++i){
    std::cout<< "inner value : "<< c << std::endl;
    func();
    ++c;
}

// using = will help take everything outside the scope of lambda function by value 


int c{42};
//......
//......

auto func = [&](){
    std::cout << "Outer value : "<< c << std::endl;
};

for(size_t i{}; i<5; ++i){
    std::cout<< "inner value : "<< c << std::endl;
    func();
    ++c;
}

// using & will help take everything outside the scope of lambda function by reference
 
