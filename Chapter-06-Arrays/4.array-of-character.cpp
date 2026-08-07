// we worked with integers now we should work with char

char message [5] {'H', 'e', 'l', 'l', 'o'};

cout << "message : ";
for(auto c : message){
    cout << c;
}

// here we stored the arraywith alphabets 
// we can just like int array we can modify char array as well.
// we can use the size method as well. 

char message [5] {'H', 'e', 'l', 'l', 'o', \0};

cout << "message : " << message << endl;

// the \0 is null termination character which tells to stop printing and od not print garbage value after the last elemnet 

// the best method to initialize is..
 char message2 [] {" Hello "};

 