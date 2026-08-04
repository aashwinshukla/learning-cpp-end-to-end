// Int is used to store integers 
// typically occupies 4 bytes or more in memory

// variable is named piece of memory 
// above defination is all you need to know about variable.

 int age {};
// above we did not put value in variable.
// you can do this but this will throw garbage value.

// dont store fractional number in int because you will loose your part of data 

int ans = 0;
int a = 3;
int b = 10;


ans = b/a;
cout<< "Answer is: "<< ans << endl;

ans = a/b;
cout<< "Answer is: "<< ans << endl;

// first output will give 3 as the answer and remove .33 from the data beacuse it cant store it.
// second output will give 0 as the answer and remove .3 from the data because it cant store it. 

// imp: variable should start with alphabets and not number after that you can write anything.
// variable are case sensitive.

// general way is as follow: 
typename variable_name {intializer_value};

// VERY IMP: braced initializer ,ie {}, it will through error when it will see decimal like 2.9 in int.
// whereas   in functional initializer, ie (), it will give what it can if it see decimal like 2.9 in int. (out put will be 2)

// i above used a = 3 and b = 10 
// this is called assignment notation. 
// this also cuts decimal into interger.

// we can use sizeof(int) to know int size that will be 4 byte.
