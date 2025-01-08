//binary_search
#include <iostream>
#include <vector>   
#include <bits/stdc++.h>
// 1 2 3 4 5
// 4
using namespace std;
void binary_search(vector<int>&v,int start,int end,int target){
    int mid;
    int position;
    while (start<end){
        mid=start+(end-start)/2;
        if(v[mid]==target) {
            position=mid;
            cout<<"Got it ";
            cout<<"first position is (after sorted) "<<position+1;
            break;
        }
        else if(v[mid]<target){
            start++;
        }
        else 
        end--;
    }  
}
int main(){
    vector<int>v;
    int n,x;
    cout<<"Enter the number of elements in the element in array: ";
    cin>>n;
    for(auto i=0;i<n;i++){
        cin>>x;
        v.push_back(x); 
    }
    cout<<"Enter the element to be searched: ";
    int target;
    cin>>target;
    int end=v.size()-1,start=0;
    sort(v.begin(), v.end());
    binary_search(v,start,end,target);
    return 0;
}
