// other useful built-in STL functions from <algorithm> and <numeric>

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main(){

    vector<int> v {3, 1, 4, 1, 5, 9, 2, 6};

    // count — counts how many times a value appears
    cout << count(v.begin(), v.end(), 1) << endl;   // 2

    // find — returns iterator to first occurrence, or end() if not found
    auto it = find(v.begin(), v.end(), 5);
    if(it != v.end()) cout << "found: " << *it << endl;   // found: 5

    // accumulate — sum of all elements (needs <numeric>)
    cout << accumulate(v.begin(), v.end(), 0) << endl;   // 31

    // max_element / min_element — returns iterator to largest/smallest
    cout << *max_element(v.begin(), v.end()) << endl;   // 9
    cout << *min_element(v.begin(), v.end()) << endl;   // 1

    // reverse — reverses the range in place
    reverse(v.begin(), v.end());
    for(auto val : v) cout << val << " ";   // 6 2 9 5 1 4 1 3
    cout << endl;

    // next_permutation — rearranges to next lexicographic permutation
    // returns false when it wraps around back to the first permutation
    vector<int> p {1, 2, 3};
    do{
        for(auto val : p) cout << val << " ";
        cout << endl;
    }while(next_permutation(p.begin(), p.end()));
    // prints all 6 permutations of {1, 2, 3}

    // rotate — moves elements so that the element at the given position becomes the new first
    vector<int> r {1, 2, 3, 4, 5};
    rotate(r.begin(), r.begin() + 2, r.end());
    for(auto val : r) cout << val << " ";   // 3 4 5 1 2
    cout << endl;

    // unique — removes CONSECUTIVE duplicates, returns iterator to new end
    // sort first if you want to remove all duplicates
    vector<int> u {1, 1, 2, 3, 3, 3, 4};
    auto new_end = unique(u.begin(), u.end());
    u.erase(new_end, u.end());
    for(auto val : u) cout << val << " ";   // 1 2 3 4
    cout << endl;

    // binary_search — returns true/false, array must be sorted
    vector<int> bs {1, 2, 3, 4, 5};
    cout << binary_search(bs.begin(), bs.end(), 3) << endl;   // 1 (true)
    cout << binary_search(bs.begin(), bs.end(), 9) << endl;   // 0 (false)

    // lower_bound / upper_bound on sorted range
    // lower_bound — first element >= value
    // upper_bound — first element >  value
    cout << *lower_bound(bs.begin(), bs.end(), 3) << endl;   // 3
    cout << *upper_bound(bs.begin(), bs.end(), 3) << endl;   // 4

    return 0;
}
