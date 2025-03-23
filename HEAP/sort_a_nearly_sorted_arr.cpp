#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[]={6,5,4,3,2,1};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int ,vector<int>, greater<int>> pq; // min heap is formend
    vector<int>ans;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);

        if(pq.size()>k) {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(!pq.empty()) {
            ans.push_back(pq.top());
            pq.pop();
        }

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    return 0;
}