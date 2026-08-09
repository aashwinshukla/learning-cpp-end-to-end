// lambdda function signature

// [capture list] (parameters) -> return type{
    //function body 
// };

auto func = [](){
    std::cout <<"Hello world" << std::endl;
}
func();
// above is the best way to explain the begineers but as we go we will learn more

[](){
    std::cout <<"Hello world" << std::endl;
}();

// above way we can directly call the lambda function

[](double a, double b){
    std::cout << "a + b : "<< (a + b) << std::endl; 
}(12.1, 5.7);
// this is lambda function. we will learn about capture list next.

[](double a, double b){
    return (a + b);
}(12.1, 5.7);

// another way you write 
// or for direct print

std::cout << "result : "<<
[](double a, double b){
    return (a + b);
}(12.1, 5.7); << std::endl;

// at last for data type

auto result = [](double a, double b) -> double {
    return (a + b);
}(12.1, 5.7); 
std::cout << "result : "<< result << std::endl;
