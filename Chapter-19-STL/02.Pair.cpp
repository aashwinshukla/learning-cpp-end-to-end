// pair = stores exactly two values of possibly different types under one name
// part of <utility> (included automatically with most STL headers)

#include <iostream>
#include <utility>
using namespace std;

int main(){

    // basic pair
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;   // 1 3

    // nested pair — more than two elements
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;   // 1 3 4

    // array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;   // 4 — second element of the pair at index 1

    return 0;
}
