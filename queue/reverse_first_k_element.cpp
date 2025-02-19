#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q) {
    queue<int> temp;
    while (q.size() > 0) {
        temp.push(q.front());
        cout << q.front() << " ";
        q.pop();
    }
    while (temp.size() > 0) {
        q.push(temp.front());
        temp.pop();
    }
}
void reverse_k(queue<int>&q,int k){
    stack<int>temp;
    while(q.size()>k){
        int x=q.front();
        temp.push(x);
        q.pop();
    }
    while(temp.size()>0){
        int x=temp.top();
        temp.pop();
        q.push(x);
    }
    int n=q.size();
    for(int i=1;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    int k=4;
    reverse_k(q,k);

    display(q);
    return 0;
}