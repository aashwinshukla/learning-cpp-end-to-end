// polymorphism doesn't have to be done only at the top base class level
// you can create polymorphism at any level of the hierarchy

// example hierarchy:
// Animal (base)
//   └── Bird  : public Animal
//         ├── Bat  : public Bird
//         └── Owl  : public Bird
//   └── Land  : public Animal
//         ├── Dog  : public Land
//         └── Cat  : public Land

// you can use Animal polymorphism to call breath() on all of them:
// Animal* animals[]{&bat1, &owl1, &dog1, &cat1};
// for(const auto& animal : animals){
//     animal->breath();
// }

// but you can also use Bird polymorphism to call fly() on just birds:
// Bird* birds[]{&bat1, &owl1};
// for(const auto& bird : birds){
//     bird->fly();
// }

// and Land polymorphism for land animals:
// Land* land_animals[]{&dog1, &cat1};
// for(const auto& land : land_animals){
//     land->run();
// }

// this is the power of layered polymorphism —
// you can group and call behavior at whichever level makes sense for your situation
// virtual functions at each level enable the right method to be called
