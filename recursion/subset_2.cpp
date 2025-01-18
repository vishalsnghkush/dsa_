#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subset(string ans,string original,vector<string>&v,bool flag){
    if(original.empty()){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.length()==1){
       if(flag==true) subset(ans+ch,original.substr(1),v,true);
        subset(ans,original.substr(1),v,true);
        return;
    }
    char dh=original[1];
    if(ch==dh){
       if(flag==true) subset(ans+ch,original.substr(1),v,true);
       subset(ans,original.substr(1),v,false);
    }

    else{
       if(flag==true) subset(ans+ch,original.substr(1),v,true);
        subset(ans,original.substr(1),v,true);
    }
}
int main(){
    string s="aaaabbbbb";
    vector<string>v;
    subset("",s,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}