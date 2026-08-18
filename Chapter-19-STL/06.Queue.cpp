// Another container - queue
// First in First out is the rule it follows

queue<int> q;
q.push(1);  //{1}
q.push(2);  //{1, 2}
q.emplace(4); //{1, 2, 4}

1.back += 5;

cout << q.back(); // prints 9

cout << q.front(); // prints 1

q.pop(); // prints {2, 9}

// size , swap , empty is same as stack 


// Next lets see priority_queue
// here the queue prioritize the value.
priority_queue<int> pq;

pq.push(5); // {5}
pq.push(2); // {5, 2}
// since 2 is smallest thats why push made it last 
pq.push(8); // {8, 5, 2}
// since 8 biggest push made it first in the pq
pq.emplace(10); // {10, 8, 5, 2}

cout << pq.top(); // prints 10
pq.pop(); // {8, 5, 2}

// size , swap , empty function same as other 

// Minimum Heap 
priority_queue<int, vector<int>, greater<int>> pq;
pq.push(5); // {5}
pq.push(2); // {2, 5}
pq.push(8); // {2, 5, 8}
pq.emplace(10); // {2, 5, 8, 10}
