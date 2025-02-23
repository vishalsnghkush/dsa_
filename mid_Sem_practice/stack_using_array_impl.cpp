#include<iostream>
using namespace std;
class Stack{
public:
    int arr[5];
    int indx;
    Stack(){
        indx=-1;
    }
    void push(int val){
        if(indx==4){
            cout<<"Stack is full !. "<<endl;
            return;
        }
        indx++;
        arr[indx]=val;
    } 
    void pop(){
        indx--;
    }
    int top(){
        if(indx==-1){
            cout<<"Stack is not filled !"<<endl;
            return;
        }
        return arr[indx];
    }
    int size(){
        return indx+1;
    }
};
int main(){
    Stack s;
    s.push(5);
    
    return 0;
}