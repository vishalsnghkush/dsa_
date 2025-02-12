#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<st.size()<<endl; //0
    st.push(20);    //1
    st.push(21);    //2
    st.push(22);    //3
    st.push(23);    //4
    cout<<st.size()<<endl; //4
    st.pop();//3
    cout<<st.size()<<endl;//3
    cout<<st.top()<<endl; // show the top element
    // printing of the stack in the reverse order
    /*
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    this will remove the element's from the stack
    */
    // to over come this make an another temp stack where we can store the dats
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    // now putting back the element to the og stack
    while (temp.size()>0){
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    return 0;
}