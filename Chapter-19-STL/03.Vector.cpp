// vector = a dynamic array — size grows and shrinks automatically
// unlike a regular array, you don't need to know the size upfront

#include <iostream>
#include <vector>
using namespace std;

int main(){

    // declaration
    vector<int> v;

    // push_back  — adds element at the end, creates a copy
    // emplace_back — adds element at the end, constructs it in place (slightly faster)
    v.push_back(1);
    v.emplace_back(2);
    // v = {1, 2}

    // vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});     // needs curly braces
    vec.emplace_back(1, 2);    // emplace_back constructs directly — no braces needed

    // initializing with a size and default value
    vector<int> v1(5, 100);    // {100, 100, 100, 100, 100}
    vector<int> v2(5);         // {0, 0, 0, 0, 0} — default initialized to 0
    vector<int> v3(v1);        // copy of v1 — {100, 100, 100, 100, 100}

    // iterators
    vector<int> nums {20, 34, 56, 67};

    vector<int>::iterator it = nums.begin();   // points to first element (20)
    it++;
    cout << *it << endl;   // 34

    it = it + 2;
    cout << *it << endl;   // 67 — moved 2 more positions forward

    // end()    — points to memory AFTER the last element (not the last element itself)
    // rbegin() — reverse begin (points to last element)
    // rend()   — reverse end (points before the first element)

    cout << nums.back() << endl;   // 67 — last element

    // printing a vector — 3 ways
    // method 1: explicit iterator
    for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // method 2: auto iterator
    for(auto it = nums.begin(); it != nums.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // method 3: range-based for (cleanest)
    for(auto val : nums){
        cout << val << " ";
    }
    cout << endl;

    // erase — removes element at a position (position is included)
    vector<int> e {10, 20, 30, 40, 50};
    e.erase(e.begin() + 1);              // removes index 1 (20) → {10, 30, 40, 50}
    e.erase(e.begin() + 1, e.begin() + 3); // removes index 1 and 2, index 3 NOT included → {10, 50}

    // insert
    vector<int> ins(2, 100);             // {100, 100}
    ins.insert(ins.begin(), 300);        // {300, 100, 100}
    ins.insert(ins.begin() + 1, 2, 10); // inserts 10 twice at index 1 → {300, 10, 10, 100, 100}

    // other useful methods
    cout << e.size() << endl;   // number of elements
    e.pop_back();               // removes last element
    v1.swap(v3);                // swaps contents of two vectors
    e.clear();                  // removes all elements
    cout << e.empty() << endl;  // 1 (true) — vector is now empty

    return 0;
}
