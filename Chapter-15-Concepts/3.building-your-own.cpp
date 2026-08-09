// custom concepts

// for following make sure your syntax is correct 

template <typename T>
concept MyIntegral = std::is_integral-v<T>;

template <typename T>
concept Multipliable = requires(T a, T b){
    a * b; 
};

template <typename T>
concept Incrementable = requires (T a){
    a += 1;
    ++a;
    a++;
};

