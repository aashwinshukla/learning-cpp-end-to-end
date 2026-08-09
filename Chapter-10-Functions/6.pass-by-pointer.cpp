using namespace std;

void say_age(int* age);

int main(){
    int age {23};

    cout<< "age before " << age << endl;
    say_age(&age);
    cout<< "age after " << age << endl;

    return 0;
    
}

void say_age(int* age){
    ++(*age);
    cout << "hello! you are "<< *age << " years old "<< endl;
// changing age here will change original age as well becuase we used same address to point at a variable

}

// output : age before 23
//          hello! you are 24 years old 
//          age after 24
