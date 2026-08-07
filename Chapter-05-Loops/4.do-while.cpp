// lets start with do while loops

const unsigned int COUNT {10};

unsigned int i {0};

do{
    std::cout << "I love C++"<< std::endl;
    ++i;
}while(i< COUNT);

// here the process is a little bit different
// first it performs the program => check conditions => repeat
// once conditions are false it will stop 

// so lets say...
const unsigned int COUNT {10};

unsigned int i {11};

do{
    std::cout << "I love C++"<< std::endl;
    ++i;
}while(i< COUNT);

// here i = 11 
// in anyother loop that we learned the program would have never started since condition never met 
// here it performs once..

//output: I love C++
// them checks condition which doesnt meet and then loop ends 

// which means we atleast get onetime output even ifcondition dont meet.

