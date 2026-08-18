// stack = Last In First Out (LIFO)
// think of a stack of plates — you add and remove from the top only

#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> st;

    st.push(1);    // {1}
    st.push(2);    // {2, 1}
    st.push(3);    // {3, 2, 1}
    st.push(3);    // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top()  << endl;   // 5 — peeks at the top without removing
    st.pop();                    // removes 5 — {3, 3, 2, 1}
    cout << st.size() << endl;   // 4
    cout << st.empty()<< endl;   // 0 (false)

    stack<int> st2;
    st.swap(st2);   // swaps contents of st and st2

    return 0;
}

// stack does NOT have begin(), end() or iterators — no traversal allowed
// you can only interact with the top element
