// 1. lenght of string 

const char message1 [] {"The sky is blue."};

//array deacys into pointer when we use const char*
const char* message2 {"The sky is blue."};
cout << "message1 : "<< message1 << endl;

//strlen ignores null characters
cout << "strlen(messge1) : " << strlen(message1) << endl;

//includes the null caharcter
cout << "sizeof(message1) : "<< sizeof(message1) << endl;

// strlen still works with decayed arrays
cout << "strlen(message2) : " << strlen(message2) << endl;

// prints size of pointer 
cout << "sizeof(message2) : " << sizeof(message2) << sizeof(message2) << endl;
