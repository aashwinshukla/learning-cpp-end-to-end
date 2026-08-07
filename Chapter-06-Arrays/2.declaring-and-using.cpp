// lets see how to declare and use array.
using namespace std;

int score [10];  // array storing 10 integers.

for(size_t i{0}; i<10; i++){
    cout<< "Score " << i+1 << ": "<< score[i]<<endl;
}

// now this will print out all the 10 value of score stored inside the array score[]
// thing to notice since we didnt added anything all value will be garbage value 

//btw indexing starts from 0.
// so when we say score[10] array that means array has value at memory 0 to 9 which we are acessing using i and for loop

for(size_t i{0}; i<10; ++i){
    score[i] = i * 5;
}

// I wrote above code so you can add this before printing out the values in array,
// so you all dont get garbage value 
// and above is one of the best way to assign value to memory inside the array


