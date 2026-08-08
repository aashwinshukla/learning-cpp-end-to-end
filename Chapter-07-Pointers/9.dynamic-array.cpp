// Arrays allocated on the heap with the new operator. 
// Can also use the std::nothrow version of new

double *p_salaries {new double[size]};   // garbage value 

int *p_students { new(std::nothrow) int[size]{}};   // all initialized to 0

double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}};     // anything after 5 in will be initialized to 0

// releasing memory 

delete[] p_scores;
p_scores = nullptr;

delete[] p_salaries;
p_salaries = nullptr;

delete[] p_students;
p_students = nullptr;


// to see all the value inside on an array you cant just use cout and write the name of the pointer 
// we will have to use loop

for(auto s : scores){
    cout << " Scores : " << s << endl;
}



