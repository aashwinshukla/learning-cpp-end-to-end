// When 'new' FAILS!!

// in some rare case the new opt will fail to allocate dynamic memory 
// from the heap. when that happens, and you have no mechanism in place to handle that failure, 
// an exception will be thrown and your program will crash.

// VERY RARE!!


for (size_t i{}; i<100000000000000; ++i){
    try{
        int* lots_of_int {new int{1000000000}};
    }catch(std::exception& ex){
        std::cout << "Caught exception ourselves : " << ex.what() << std::endl;
    }    
}   

// or just use...
std::nothrow 
// this will tell code not to throw any exception and just assign the pointer as nullptr

