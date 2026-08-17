// another container is Stack

stack<int> st; 
// declaration


st.push(1);  //{1}
st.push(2);  //{2,1}
st.push(3);  //{3,2,1}
st.push(3);  //{3,3,2,1}
st.emplace(5); //{5,3,3,2,1}

