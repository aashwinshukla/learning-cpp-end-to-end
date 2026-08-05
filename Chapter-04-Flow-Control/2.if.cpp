int number1 {45};
int number2 {67};

bool result = (number1 < number2);
std::cout<< std::boolalpha << "result: "<< result << std::endl;

std::cout<<"free standing if statement"<< std::endl;

if(result == true){
    // if this is true then....
    std::cout<< number1 << " is less than "<< number2 << std::endl;
}else{
    // else do this...
    std::cout<< number2 << " is less than "<< number1 << std::endl;
}

