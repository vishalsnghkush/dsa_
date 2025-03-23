#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[]={6,5,4,3,2,1};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int ,vector<int>, greater<int>> pq; // min heap is formend
    int minCost=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }

    while(pq.size()>1){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        pq.push(x+y);
        minCost+=(x+y);

    }
    cout<<minCost;
    return 0;
}