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
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    print(st);
    stack<int>temp;
    stack<int>temp2;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    
    while(temp.size()>0){
        temp2.push(temp.top());
        temp.pop();
    }
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    // print 
    cout<<endl;
    print(st);

}
