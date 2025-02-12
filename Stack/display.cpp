#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    insertAtBottom(st,val);
    st.push(x);
}
void reverse(stack<int>&st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,x);
}
void displayrev(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    cout<<x<<" ";
    displayrev(st);
    st.push(x);
}
void display(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    display(st);
    cout<<endl;
    //displayrev(st);
    cout<<endl;
    insertAtBottom(st,7);
    display(st);
    reverse(st);
    cout<<endl;
    display(st);
    return 0;
}