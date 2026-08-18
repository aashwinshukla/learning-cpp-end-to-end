// std::sort — sorts a range in ascending order by default
// from <algorithm>, works on arrays and vectors through iterators

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// custom comparator — must return true if a should come BEFORE b
bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second){
        return true;   // sort by second element ascending
    }
    if(p1.second == p2.second){
        return p1.first > p2.first;   // if second is equal, sort by first descending
    }
    return false;
}

int main(){

    // sorting a plain array
    int a[] = {1, 4, 5, 3, 2};
    int n = 5;

    sort(a, a + n);           // {1, 2, 3, 4, 5} — ascending
    for(auto val : a) cout << val << " ";
    cout << endl;

    // sort only part of the array — index 2 to 4 (index 5 not included)
    sort(a + 2, a + 5);       // sorts elements at index 2, 3, 4

    // sort descending
    sort(a, a + n, greater<int>());   // {5, 4, 3, 2, 1}
    for(auto val : a) cout << val << " ";
    cout << endl;

    // sorting a vector
    vector<int> v {5, 1, 4, 2, 3};
    sort(v.begin(), v.end());           // ascending
    sort(v.begin(), v.end(), greater<int>()); // descending

    // sorting with a custom comparator
    // sort pairs by second element ascending,
    // if second is equal then by first element descending
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(arr, arr + 3, comp);
    // result: {{4,1}, {2,1}, {1,2}}
    // 4,1 and 2,1 both have second=1 so sorted by first descending (4 before 2)
    // then 1,2 has second=2 so it comes after

    for(auto p : arr){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
