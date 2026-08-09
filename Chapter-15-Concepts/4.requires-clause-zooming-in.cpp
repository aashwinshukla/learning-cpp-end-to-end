// the requires clause can take in four kind of requirment 
/* 
    1. Simple Reqiremnets 
    2. Nested Requirements 
    3. Compound Requirements 
    4. Type Requirements
*/

template <typename T>
concept TinyType = requires (T t){
    sizeof(T) <= 4; // sinple requirement : only checks syntax
}; 


template <typename T>
concept TinyType = requires (T t){
    sizeof(T) <=4; //Simple requiremnets : only check syntax
    requires sizeof(T) <= 4; // Nested Requiremenets : Checks the if the expression is true
};

template <typename T>
concept Addable = requires (T a, T b){
    //noexcept is optional 
    {a + b} noexcept -> std::convertible_to<int>;  //Compound requirement
    //check if a + b is valid syntax, doesnt throw exceptions(optional) , and result 
    //is convertible to int(optional)
};

