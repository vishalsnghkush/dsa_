#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq; // by default maxHeap banta hai
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    pq.push(5);
    cout<<pq.top()<<endl; //top pe max wala hi hoga to 10 hi show hoga
    pq.pop(); // 10 jo top pr tha wo hi pop hua hai
    cout<<pq.top()<<endl;  // 8

}