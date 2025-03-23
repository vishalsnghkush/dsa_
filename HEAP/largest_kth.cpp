#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={6,3,7,5,2,-1,-6};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int ,vector<int>, greater<int>> pq; // min heap is formend

    for(int i=0;i<n;i++){
        pq.push(arr[i]);

        if(pq.size()>k) pq.pop();
        }
        cout<<pq.top();
    return 0;
}