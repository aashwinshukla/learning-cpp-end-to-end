// now we already saw that a private will remain private 
// so what if we want to ressuract the member and use it as protected or some other way 

// so do this all we have to do is 
// when we have already made a derived class 
// in that write 

protected : // you can write whatever you prefer i wanted to turn few private inheritance into protected
    using Person::get_full_name;
    using Person::get_age;
    using Person::get_address;

// this will turn the private inheritance into ptotect6ed

// BUT remeber that you cant ressurect sometging that is already in private in the original class
