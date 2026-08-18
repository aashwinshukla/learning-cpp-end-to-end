// another container - set 
// simple principle 
// 1. store sorted
// 2. stores unique

set<int>st;
st.insert(1);  // {1}
st.emplace(2); // {1, 2}
st.insert(2);  // {1, 2}
st.insert(4);  // {1, 2, 4}
st.insert(3);  // {1, 2, 3, 4}

// Functionability of insert can be al;so used from 
// vector, that only increases efficiency

// begin(), end(), rbegin(), rend(), size(), 
// empty(), and swap() are same as others

