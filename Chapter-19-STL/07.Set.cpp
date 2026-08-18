// set = stores UNIQUE elements in SORTED order automatically

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){

    // set
    set<int> st;

    st.insert(1);   // {1}
    st.emplace(2);  // {1, 2}
    st.insert(2);   // {1, 2}   — duplicate ignored
    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4} — inserted in sorted position

    for(auto val : st){
        cout << val << " ";   // 1 2 3 4
    }
    cout << endl;

    // find — returns iterator to element, or end() if not found
    auto it = st.find(3);
    if(it != st.end()){
        cout << "found: " << *it << endl;   // found: 3
    }

    // erase by value
    st.erase(3);   // {1, 2, 4}

    // lower_bound — first element >= value
    // upper_bound — first element >  value
    cout << *st.lower_bound(2) << endl;   // 2
    cout << *st.upper_bound(2) << endl;   // 4

    // begin(), end(), rbegin(), rend(), size(), empty(), swap() — same as vector


    // multiset — same as set but ALLOWS duplicates, still sorted
    multiset<int> ms;
    ms.insert(2);   // {2}
    ms.insert(2);   // {2, 2}
    ms.insert(2);   // {2, 2, 2}

    // erase(value) removes ALL occurrences — use erase(iterator) to remove just one
    ms.erase(ms.find(2));   // removes only one 2 → {2, 2}

    for(auto val : ms){
        cout << val << " ";   // 2 2
    }
    cout << endl;


    // unordered_set — unique elements but NOT sorted, faster average lookup O(1)
    // no lower_bound or upper_bound
    unordered_set<int> ust;
    ust.insert(5);
    ust.insert(1);
    ust.insert(3);
    // order not guaranteed

    return 0;
}
