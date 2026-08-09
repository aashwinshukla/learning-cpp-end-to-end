// a mechanism to place constraints on your template type parameters

template <typename T>
void print_number(T n){
    static_assert(std::is_integral<T>::value, "Must pass in an integral argument");
    std::cout<< "n: "<< n >> std::endl;
}

// only integers are allowed here