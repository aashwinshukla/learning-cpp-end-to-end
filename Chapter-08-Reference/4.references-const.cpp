// const references

using namespace std;

cout<<endl;
cout<< " Const references : " <<endl;

age= 30;
const int& const_ref_age{age};
// here const applies to the variable const_ref_age and not age variablec which can be a const or not.

cout << "age: " << age << endl;
cout << " const_ref_age: "<< const_ref_age << endl;

// try to modify through const ref
const_ref_age = 32; // ERROR

// there is.......
const int* const const_ptr_to_const_age{&age};

*const_ptr_to_const_age = 32;// error

//there is nosuch thing as.....
const int& const weird_ref_age{age};  //ERROR
