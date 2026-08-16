// the first container which will learn is vector

vector<int> v;
// vector declaration

v.push_back(1);
v.emplace_back(2);
// explain what these do 

vector<pair<int, int>> vec;

v.push_back{1, 2};
v.emplace_back(1, 2);
// explain this as well

vector<int> v(5,100);  // this means {100, 100, 100, 100, 100} , ie 100 is 5 times
vector<int>(5);  // this 5 instences of either zero or garbage value 

vector<int> v1(5, 20);
vector<int> v2(v1);
// v2 will have similar collection of 5 20's as v1


vector<int>::iterator it = v.begin();
it++;
cout<< *(it) << " ";
// if collection is {20, 34, 56, 67}
// then we will get 34 since we did it++ then print

it = it+2;
cout << *(it) <<" ";
// here assuming we did it++ and then it = it + 2
// we will get 67

vector<int>::iterator it = v.end();
// end points to memory after the last element or the place after the last element
vector<int>::iterator it = v.rend();
// reverse end
vector<int>::iterator it = v.rbegin();
// reverse begin

cout << v.back() << " ";
// last index element 

// to print the vector 
// method 1: 
for (vector<int>::iterator it = v.begin(); it != v.end(); it++){

}

// method 2: 
for (auto it = v.begin(); it != v.end(); it++ ){

}

// method 3: 
for (auto it : v){

}


//now to delete an element we use erase

v.erase(v.begin()+1);
// this will remove any elemnet on +1 of the element index 0
v.erase(v.begin()+2, v.begin()+4)
// now this tells the range of removal of element 
// where begin()+2 is starting point and is included 
// whereas begin()+4 is end point which is not included and will not get deleted 



// now what if we want to insert something 
vector<int>v(2, 100);
v.insert(v.begin(), 300);  // this will change vector from {100, 100} to {300, 100, 100}
v.insert(v.begin()+1, 2, 10);  // this will change vector from {300, 100, 100} to {300, 10, 10, 100, 100}

v.size;  // will give us number of element in the vector v
v.pop_back();  // removal of a last element from the vector v
v1.swap(v2);  // swap the elemnet of both the vector with each other

v.clear();  // erase the entire vector 
v.empty();  // tells true / false if our vector is empty or not 

