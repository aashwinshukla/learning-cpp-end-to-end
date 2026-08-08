// 1. Check Alphanumeric 
std::isalnum
//is what we will use for this manipulation
//so we can check by....
cout<< isalnum('C') << endl;
cout<< isalnum('^') << endl;

// for first output return value will be non zero since C is alphanumeric value
// for seond it will be 0 


// 2. Check Alphabetic 
std::isalpha

// 3. Check Blank
char message[] {"Hello there, how are you?"};

int blank_count{0};
for(size_t i{0}; i< size(message); i++){
    if(std::isblank(message[i])){
        cout << "Found a blank character at index : [ " << i << " ]"<< endl;
        ++blank_count;
    }
}

cout << " IN total we found "<< blank_count << "blank characters" << endl;


// 4. lowercase/ uppercase
// similar to blank_count but by using islower() and isupper()
// use for and nested inside are if else to get both at the same time.

// 5. Check digit 
// same as above two manipulation but use isdigit() 
// use for and nested inside are if else to get the count.

// 6. Turn to lowercase / uppercase 
// use tolower and toupper.

