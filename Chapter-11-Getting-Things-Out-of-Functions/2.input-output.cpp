// output parameters — using a reference parameter to pass data back to the caller

#include <iostream>
#include <string>
using namespace std;

// input1 and input2 are const — they can only be read, not modified
// output is non-const — the function writes the result into it
void max_str(const string& input1, const string& input2, string& output){
    if(input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

int main(){
    string s1 {"Mango"};
    string s2 {"Apple"};
    string result;   // empty — will be filled by the function

    max_str(s1, s2, result);
    cout << "larger string : " << result << endl;   // Mango

    return 0;
}

// the function is void — it returns nothing directly
// but because output is a reference, the change inside the function
// is visible in main through the result variable
// this is the output parameter pattern
