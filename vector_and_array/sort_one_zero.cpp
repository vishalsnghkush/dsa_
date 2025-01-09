#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int noz=0;
    int noo=0;

    //counting the no of zeros and one and print them accordingly

    for(auto i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    //printng the array
    for(auto i=0;i<v.size();i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }

}
int main(){
    vector<int>v={0,1,1,0,1,0,1,0};
    sort01(v);
    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}