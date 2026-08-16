// using pair we can but multiple input in pair 

pair<int, int> p = {1,3};
// now 1, 3 are stored inside the p

cout << p.first << " " << p.second;
// we can access them using above statement 

// we can also nest pairs
pair <int, pair<int, int>> p = {1, {3, 4}};
// now we have more than two elements stored inside pair 
// to access them 
cout << p.first << " " << p.second.second << " " << p.second.first;

// we can also have them in an array 
pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
// to access them 
cout << arr[1].second;
