vector<int>v;
similarly->
STL ->Standard Template Librsry
stack<int>st;
empty stack is created with this
st.push(val);
st.pop();
st.top();
st.size();
st.empty();
TC->
             array  linked list   stack
get->       O(1)    O(n)           O(n);
insert->    O(n)    O(n)           O(n);
delete->    O(n)    O(n)           O(n);

SC->
             array  linked list   stack
get->       O(1)    O(1)           O(n);
insert->    O(n)    O(1)           O(n);
delete->    O(n)    O(1)           O(n);

