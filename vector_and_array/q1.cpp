#include<iostream>
#include<vector>
using namespace std;    
void fun(vector<int>&v){
    for(auto i=0;i<v.size();i++){
        if(v[i]<35) cout<<i<<" ";
    }
}
int main(){
    vector<int>v;
    for(auto i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    fun(v);

    return 0;
}