class Person
{
    friend std::ostream& operator<< (std::ostream& out, const Person& person);
public : 
    Person();
    Person(std::string first_name_param, std::string last_name_param);
    ~Person();
private : 
    std::string first_name{"Mysterious"};
    std::string last_name{"Person"};

};

// last time we show above code or private member 
// which cant be accessed from outside
// or anyone third person

class Person
{
    friend std::ostream& operator<< (std::ostream& out, const Person& person);
public : 
    Person();
    Person(std::string first_name_param, std::string last_name_param);
    ~Person();
protected : 
    std::string first_name{"Mysterious"};
    std::string last_name{"Person"};

};

// now after using protected we can access it from derived classes but 
// still not from outside which is good
// we will be able to modify from derived class