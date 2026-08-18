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
