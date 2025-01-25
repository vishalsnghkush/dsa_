#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxsum=INT_MIN;
    int maxIdx=-1;
    int prevSum=0;
    // calculating the previous sum
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    maxsum=prevSum;
    int i=1,j=k;
    while(j<n){
        int currSum=prevSum+arr[j]+arr[i-1];
        if(maxsum<currSum){
           maxsum=currSum;
           maxIdx=i; 
        }
        prevSum=currSum;
        i++;
        j++;
    }
    cout<<maxsum;
}