#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    // push
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    // pop
    q.pop();
    //top->front
    cout<<q.front(); //2 
    cout<<q.back(); // 5
    //size ,empty
    cout<<q.size();
    //back
    return 0;
}