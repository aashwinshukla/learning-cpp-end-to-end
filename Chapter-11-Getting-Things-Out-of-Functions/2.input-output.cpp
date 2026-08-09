using namespace std;

void max_str(const string& input1, const string& input2, string& output){
    if(input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

// above we put reference parameter with two constanat non chanageable input 
// and a string output that can hold the answer.

// we can do this many different problems and make solution
// using functions 

// once we return the output we will get our output 

// void doesnt give anything in return but just for the example
// i used it. 