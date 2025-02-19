#include<iostream>
#include<queue>
using namespace std;
int main(){
    // arr ={0,-1,-2,3,4,-5,6,4,7,-8}
    //ans=  {-1,-1,-2,-5,-5,-5,0,-8}
    int arr[] ={0,-1,-2,3,4,-5,6,4,7,-8};
    queue<int>q;
    vector<int>ans;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    int i=0,k=3;
    while(i<=n-k){
     while(q.size()>0 && q.front()<i) q.pop();  
     if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
     else ans.push_back(arr[q.front()]);
     i++;
    }
    return 0;
}