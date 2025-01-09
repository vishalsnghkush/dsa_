#include<iostream>
#include<vector>
using namespace std;
//do it by swapping and push back
void sort01(vector<int>&v,int start,int end){
    while(start<end){
        if(v[end]==1) end--;
        else{
            if(v[end]==0){
                swap(v[end],v[start]);
                start++;
            }
        }
    }
}
int main(){
    vector<int>v={0,1,1,0,1,0,1,0};
    int end=v.size()-1;
    sort01(v,0,end);
    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}