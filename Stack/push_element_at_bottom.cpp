// it take two stack 
// t.c is O(n) and s.c also
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
// helper stack bana ke pahele st ko empty kr do empty hone ke 
// baad value ko insert put kr do
// uske baad by the help of helper fun i put them back
void insertAtBottom(stack<int>&st,int value){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(value);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    print(st);
    insertAtBottom(st,7);
    
    // print 
    cout<<endl;
    print(st);

}
