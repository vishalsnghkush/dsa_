
#include<iostream>
#include<queue>
using namespace std;
int main(){


    // ways of intinilizing it is quite different 

    // now let's see how to intilize it

    priority_queue <int,vector<int>, greater<int>>pq; // by default maxHeap banta hai
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    pq.push(5);
    cout<<pq.top()<<endl; //top pe max wala hi hoga to 10 hi show hoga
    pq.pop(); // 10 jo top pr tha wo hi pop hua hai
    cout<<pq.top()<<endl;  // 8

}

// problem indentification

// 1. kth smallest, kth largest top k , frequent elemrnt , closest k 
// 2. at any point of time , min / max elemrnt are required 
// 3. sorting (sometimes)