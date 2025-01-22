#include<iostream>
using namespace std;
void permutation(string ans,string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[0];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(ans+ch,left+right);
    }
}
int main(){
    string str="abcd";
    permutation("",str);
    return 0;
}