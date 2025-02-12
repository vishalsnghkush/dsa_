#include<iostream>
#include<stack>
using namespace std;

// when base case is reached i.e size is zero then push at that time instead of return
void push_at_bottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    push_at_bottom(st,val);
    st.push(x);
}

void reverse(stack<int>&st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    push_at_bottom(st,x);
}
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
    cout<<endl;
    push_at_bottom(st,-10);
    reverse(st);
    cout<<endl;
    
    display(st);
    return 0;
}