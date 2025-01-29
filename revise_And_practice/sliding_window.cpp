#include<iostream>
// quick sort ka algorithm ye hai ki pivit element ko bhej do at it's right location i.e at it;s middle
// then we have to find it's index by it's count variable
// then element which is smaller than them send to left and right ...respectively return partinon

#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=INT_MIN;
    int preSum=0;
    int Indx=-1;
    int k=3;
    for(int i=0;i<k;i++){
        preSum+=arr[i];
    }
    // now i have previous sum
    int i=1;
    maxsum=preSum;
    int j=k;
    while(j<n){
        int currentSum=preSum+arr[j]-arr[i-1];
        if(maxsum<currentSum){
            maxsum=currentSum;
            Indx=i;
        }
        preSum=currentSum;
        i++;
        j++;
    }
    cout<<maxsum;
    return 0;
}