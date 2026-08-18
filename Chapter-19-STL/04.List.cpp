// list = a doubly linked list
// unlike vector, inserting and removing from the front or middle is O(1)
// but no random access — you can't do list[3], must iterate to reach an element

#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(5);   // {5, 2, 4}
    ls.emplace_front(1);// {1, 5, 2, 4}
    ls.pop_front();     // {5, 2, 4}
    ls.pop_back();      // {5, 2}

    for(auto val : ls){
        cout << val << " ";
    }
    cout << endl;

    // begin(), end(), rbegin(), rend(), size(), empty(), swap(), clear() — same as vector
    // erase() and insert() also work the same way through iterators

    // use list over vector when:
    // — you frequently insert or remove from the front or middle
    // — you don't need random access by index

    return 0;
}
