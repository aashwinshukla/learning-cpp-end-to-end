// another container - map
// stores in formate of key and value like dictionaies 
// key can be of any data type 
// stores in sorted order
map<int, int>mpp;

map<int, pair<int, int>>mpp;

map<pair<int, int>, int>mpp;

mpp[1] = 2;
mpp.emplace({3, 1});

mpp.inser({2, 4});

mpp[{2, 3}] = 10;

{
    {1, 2}
    {2, 4}
    {3, 1}
}

for (auto it : mpp){
    cout << it.first << " " << it.second << endl;
}

// next we have multimap
// same as map but can store duplicate keys 

// next we also have unordered map
// same difference as set nd unordered set