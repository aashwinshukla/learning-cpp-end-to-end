// to use array without knowing or putting size

int array[] {/*all the elements here */}

cout<< "size of array "<< size(array) << endl;

for( size_t i{0}; i < size(array); ++i){
    cout << "scores[" << i << "] : "<<scores[i] << endl;
}

// above way it is easier to work with unkonw size of array

// another way is ....

size_t count {sizeof(scores)/ sizeof(scores[0])}

// size of array devided by size of element gives number of elements in the array 
// then we can directly write in the loop i < count 

