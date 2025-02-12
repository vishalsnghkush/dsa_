#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void displayrev(stack<int>&st){
   if(st.size()==0) return;
   int x=st.top();
   cout<<x<<" ";
   st.pop();
   displayrev(st);
   st.push(x);

}
// TC ->O(n) // because of the call stack of the recurssion
// SC ->O(n)

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    displayrev(st);
    cout<<endl;
    display(st);
    return 0;
}