// there are build in concepts in C++ library 
// but if required you can create your own custom concepts as well

template <typename T>
requires std::integral<T>
T add (T a, T b){
    return a + b;
}

// only integer allowed

char a_0{10};
char a_1{20};

auro result_a = add(a_0, a_1);
cout << "result_a : "<< static_cast<int>(result_a) << endl;

int b_0{11};
int b_1{12};
auto result_b = add(b_0, b_1);
cout << "result_b : "<< result_b << endl;

double c_0 {11.1};
double c_1 {12.4};
auto result_c = add(c_0, c_1);  //ERROR integral concept not satified

