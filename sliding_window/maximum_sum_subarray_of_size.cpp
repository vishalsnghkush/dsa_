// sliding window technique is also two pointer technique
// 
// maximum sum subarray of size k
// e.g let the array is 7,1,2,5,8,4,9,3,6 n=9 (size)
// must be in contingous order for the subarray
// let the k=3 so the possible subarray is
// 7 1 2, 1 2 5, 2 5 8, 5 8 4, 8 4 9, 4 9 3, 9 3 6..
// then find the mazimum sum outof them
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxsum=INT_MIN;
    int maxIdx=-1;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=0;j<i+k;j++){
            sum+=arr[j];
        }
        if(maxsum<sum){
            maxsum=sum;
            maxIdx=i;
        }
    }
    cout<<maxsum;
}
// time complexity.... O(k*n)

