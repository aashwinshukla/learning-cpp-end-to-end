// arrays allocated on the heap using new[]
// you need to know the size at the time of allocation

#include <iostream>
using namespace std;

int main(){

    const size_t size {5};

    double* p_salaries  {new double[size]};                         // garbage values
    int*    p_students  {new(std::nothrow) int[size]{}};            // all initialized to 0
    double* p_scores    {new(std::nothrow) double[size]{1,2,3,4,5}};// specified values, rest = 0

    // printing — you can't just cout the pointer name for arrays
    // that just prints the address, so use a loop
    if(p_scores){
        for(size_t i{}; i < size; ++i){
            cout << "score[" << i << "] : " << p_scores[i] << endl;
        }
    }

    // releasing heap array memory — must use delete[] not delete
    delete[] p_scores;
    p_scores = nullptr;

    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;

    return 0;
}
