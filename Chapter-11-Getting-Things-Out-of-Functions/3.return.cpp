int sum(int a, int b){
    int result = a + b;
    cout << "IN : &result(int) : " << &result << endl;
    return result;
}

int main(){
    int a {34};
    int b {16};

    int result = sum(a, b);
    cout << "Out : &result(int) : "<< &result << endl;
    cout << "sum: " << result <<endl;

    return 0;
}