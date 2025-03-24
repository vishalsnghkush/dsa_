// heap sort
#include<iostream>
#include<queue>
using namespace std;
#include<vector>
int main(){
    priority_queue<int,vector<int>,greater<int> >pq; // min heap is formed
    // can be done by min heap and max heap
    // T.C O(n* log n) merge sort ke itna hi
    // S.C O (n);
    pq.push(10);
    pq.push(9);
    pq.push(8);
    pq.push(7);
    pq.push(6);
    pq.push(5);
    pq.push(4);
    vector<int>ans;
    while(!pq.empty()){
        int x=pq.top();
        pq.pop();
        ans.push_back(x);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}