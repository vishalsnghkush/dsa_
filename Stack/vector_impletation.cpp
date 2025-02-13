#include<iostream>
#include<vector>
using namespace std;
class Stack{
public:
    vector<int>v;
    Stack(){

    }
void push(int val){
    v.push_back(val);
}    
void pop(){
    if(v.size()==0) {
        cout<<"Stack is Empty !";
        return;
    };
    v.pop_back();
}
int top(){
    if(v.size()==0){
        cout<<"Stack is Empty !";
        return -1;
    }
    return v[v.size()-1];
}
int size(){
    return v.size();
}
};
int main(){
    Stack st;
    st.push(10);
    return;
}