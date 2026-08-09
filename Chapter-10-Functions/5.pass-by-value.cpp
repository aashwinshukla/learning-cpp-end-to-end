using namespace std;

void say_age(int age);

int main(){
    int age {23};

    cout<< "age before " << age << endl;
    say_age(age);
    cout<< "age after " << age << endl;

    return 0;
    
}

void say_age(int age){
    ++age;
    cout << "hello! you are "<< age << " years old "<< endl;
// changing copy of age here will not change original age that is in main 
}

// output : age before 23
//          hello! you are 24 years old 
//          age after 23


// this is pass by value 