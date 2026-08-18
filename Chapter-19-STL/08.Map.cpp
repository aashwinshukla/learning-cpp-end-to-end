// map = stores key-value pairs, sorted by key, keys are unique
// like a dictionary — each key maps to exactly one value

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){

    // different map declarations
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    // inserting
    mpp[1] = 2;              // key 1, value 2
    mpp.emplace(3, 1);       // key 3, value 1
    mpp.insert({2, 4});      // key 2, value 4
    // result: {{1,2}, {2,4}, {3,1}} — sorted by key

    // inserting into map with pair keys
    mpp3[{2, 3}] = 10;

    // iterating
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    // find — returns iterator, or end() if key not found
    auto it = mpp.find(2);
    if(it != mpp.end()){
        cout << "found key 2, value: " << it->second << endl;   // 4
    }

    // erase by key
    mpp.erase(2);   // removes key 2

    // [] operator — if key doesn't exist, it inserts it with default value (0 for int)
    // use find() instead if you just want to check without inserting

    // size(), empty(), swap(), clear() — same as other containers


    // multimap — allows duplicate keys, still sorted
    // cannot use [] operator — use insert() only
    // multimap<int, int> mmpp;
    // mmpp.insert({1, 10});
    // mmpp.insert({1, 20});   // duplicate key allowed


    // unordered_map — key-value pairs, NOT sorted, faster average lookup O(1)
    unordered_map<int, int> ump;
    ump[1] = 100;
    ump[2] = 200;
    // order not guaranteed, no lower_bound or upper_bound

    return 0;
}
