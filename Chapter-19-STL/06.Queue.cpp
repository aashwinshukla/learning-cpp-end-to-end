// queue = First In First Out (FIFO)
// think of a line at a counter — first person in is first to be served

#include <iostream>
#include <queue>
using namespace std;

int main(){

    // regular queue
    queue<int> q;

    q.push(1);    // {1}
    q.push(2);    // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5;             // modifies the last element: 4 + 5 = 9 → {1, 2, 9}
    cout << q.back()  << endl; // 9
    cout << q.front() << endl; // 1

    q.pop();                   // removes from the front → {2, 9}
    cout << q.front() << endl; // 2

    // size(), swap(), empty() same as stack


    // priority_queue — largest element always at the top (max heap by default)
    priority_queue<int> pq;

    pq.push(5);    // {5}
    pq.push(2);    // {5, 2}   — 2 is smaller so it goes to the back
    pq.push(8);    // {8, 5, 2}— 8 is largest so it goes to the top
    pq.emplace(10);// {10, 8, 5, 2}

    cout << pq.top() << endl;  // 10
    pq.pop();                  // {8, 5, 2}


    // min heap — smallest element always at the top
    // use greater<int> as the third template argument
    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(5);    // {5}
    min_pq.push(2);    // {2, 5}  — 2 is smallest so it goes to the top
    min_pq.push(8);    // {2, 5, 8}
    min_pq.emplace(10);// {2, 5, 8, 10}

    cout << min_pq.top() << endl;  // 2

    return 0;
}
