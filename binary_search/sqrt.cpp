#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sqrt(int n){
    if (n == 0 || n == 1)
    return n;
    int start=0;
    int end=n/2;// here devide by two to reduce search space
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