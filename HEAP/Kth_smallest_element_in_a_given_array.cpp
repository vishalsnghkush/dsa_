#include<iostream>
#include<queue>
using namespace std;
int main(){
    

    //  M-1 (BuiltInsort) -> sort ,, arr[k-1];  T.C 0(nlog n) S.C->O(log n);

    //  M -2 (selection sort)  T.C (k*n)  S.C O(1)

    //  M - 3 (quick select)  T.C O(n) [not in wrost case]

    //  M - 4 (Using Heap)  T.C O(n logk)  //best case

    int arr[]={10,20,-4,5,18,24,1,-7,56};

    priority_queue<int>pq; // max heap 

    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop(); // har loop me jb heap me k se jadya elemnet ho rahe hai to heap se top wale ko pop kr do
        // then the remenaing top elemnr are the k th smllest elemrnt
     }

     cout<<pq.top();
    return 0;
}