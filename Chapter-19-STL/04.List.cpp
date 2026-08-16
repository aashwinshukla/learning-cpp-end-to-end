// another conatainer that is list 

list<int> ls;
// declaration

ls.push_back(2);  //{2}
ls.emplace_back(4);  // {2, 4}

ls.push_front(5);  // {5, 2, 4}

ls.emplace_front();  // {2, 4}

// rest function is similar to the vector

