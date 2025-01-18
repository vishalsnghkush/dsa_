#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sqrt(int n){
    if (x == 0 || x == 1)
    return x;
    int start=0;
    int end=n;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid*mid==n) return ans=mid;
        else if(mid*mid<n){
            start=mid+1;
            ans=mid;
        }
        else 
        end=mid-1;
    }
    return ans;
}
int main(){
    // sqrt ...
    int n=1010;
    cout<<sqrt(n);
}