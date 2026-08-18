// another container is Stack
// this works on Last In First Out
stack<int> st; 
// declaration


st.push(1);  //{1}
st.push(2);  //{2,1}
st.push(3);  //{3,2,1}
st.push(3);  //{3,3,2,1}
st.emplace(5); //{5,3,3,2,1}

cout << st.top();  // prints 5 
st.pop(); // removes 5 because it was the last to enter so first to leave 
cout << st.size();  //4 since 5 was removed 
cout << st.empty();  // tells true or false regariding is stack is empty 

stack <int> st1, st2;
st1.swap(st2);