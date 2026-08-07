// starting with syntax of for loops 

for(unsigned int i{}; i<10 ; ++i){
    std::cout << "i love C++"<< std::endl;
}

// above code says...
// when i is at some starting point.
// keep repeating the code until,
// i reaches 10, because max pointto repeat the code is <10
// ++i will keep the increment so it doesnt stuck in an endless loop 

// eg if i = 1 and i<10 loop limit but we didnt write ++i
// here i=1 will make the loop condition i<10 always true 
// therefore infinite loop , which we dont want.

using namespace std;

int main(){
    const size_t LIMIT {10};
    for(size_t i{0}; i< LIMIT; ++i ){
        cout<< i+1 << endl;
    }
    cout << "Loop done! "<< endl;
}

// this will print 1 to 10 
// we also added a limit variable so we dont har code the limit in the loop 
// i was declared inside the braces of for loop thats why if we used i outside of the loop we will get error 
// if declared outside everything will work fine even if we just write i;i<10;++i without data type declaration

