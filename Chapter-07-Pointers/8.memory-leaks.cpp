// when we loose acess to a memoery that is dynamically allocated

int *p_number {new int{67}};

int number {69};

p_number = &number;
// now p_number points at adress2, nut is still in use by our program
// but our program has lost access tothat memory location 
// memory has been leaked

// no way of releasing the memory 

// double allocation will also cause the leak 

int *p_number1 {new int{60}};
*p_number1 = new int{44};
// memory with int{60} leaked

// local scope pointer leak 

int main(){


    {
            int *p_number{new int{67}};

        
    }
    // memory with int{67} leaked once it crosses the braces of its locality 


    return 0;
}

