// a pointer that doesnt point to valid memory address. 
// trying to derefrence and use a dangling pointer will result in undefined behaviour
 using namespace std;

// 1. uninitialized pointer 

int *p_number; //Dangling Uninitialzied pointer

cout << endl;
cout<< "Case 1: Uninitialized pointer: "<< endl;
cout << "p_number : "<< p_number << endl;
//cout << "*p_number : " << *p_number << endl;   // CRASH!!!


// 2. Deleted pointer

cout << endl;
cout << "Case 2 : Deleted pointer" << endl;
int *p_number1 {new int{67}};

cout << "*p_number1 (before delete) : "<< *p_number1 << endl;

delete p_number1;

cout << "*p_number1 (after delete) : " << *p_number1 << endl;
// reinitialize the released memory frist otherwise program will show undefined behaviour


// 3. Multiple pointers pointing to same address

cout<< endl;
cout << "Case 3. : Multiple pointers pointing to same address :  " << endl;

int *p_number3 {new int {83}};
int *p_number4 {p_number3};

cout "p_number3 - " << p_number3 << " - " << *p_number3 << endl;
cout "p_number4 - " << p_number4 << " - " << *p_number4 << endl;

delete p_number3;

// p_number4 points to a deleted memory.
// Derefrencing it will lead to undefined behaviouir : carsh/ garbage or whatever
cout "p_number4 - " << p_number4 << " - " << *p_number4 << endl;



// solutions :
// 1. initiazlize your pointer
// 2. reset pointers after deleting 
// 3. for 3rd case make sure the owner pointer in very clear

// you can also.....
if (p_number6 != nullptr){
    cout << "*p_number6 : " << *p_number6 << endl;
}
// this will directly avoid the uninitialized pointers


// for the 3rd case  make slave and master pointer 
// like in the example p_number3 is master and p_number4 was slave 
// therefore....\

if(!(p_number3 == nullptr)){
    cout "p_number4 - " << p_number4 << " - " << *p_number4 << endl;
}
// this will cgheck with master and then run the slave 

