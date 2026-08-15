// we cvan make polymorphism at different level of inheritance 
// and not just strictly at base class

// if we have a base class animal 
// and then derived class called land and air
// and then in air you add derived classes like nocturnal and Diurnal
// and then in land you add derived classes like mammals and not mammals 

// here you can make base class polymophism, ie animal polymorphism 
// but also make land and air polymorphism as well

Animal * animals[]{&bat1, &owl1, &dog1, &cat1};

for(const auto& animal : animals){
    animal->breath();
}

Bird* birds[]{&bat1, &owl1};

for(const &auto bird : birds){
    bird->fly();
}

// and so on for land animals, we can craete respective polymorphism 
