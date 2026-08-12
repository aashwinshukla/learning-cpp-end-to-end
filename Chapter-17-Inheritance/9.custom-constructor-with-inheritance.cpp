// to be able to give data in the int main after calling the different classes using objects 
// best way to give data is 

Engineer::Enginner(const string& fullname, int age, const string address, int contract_count)
    : Person(fullname, age, address), contract_count(contract_count)
{

}

// above is the initializer list
