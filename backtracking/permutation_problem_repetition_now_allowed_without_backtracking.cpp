#include<bits/stdc++.h>

using namespace std;

void permutations(string input,string output){
    if(input.size()==0){
        cout<<output<<"\n";
        return;
    }
    for(int i=0;i<input.size();i++){
        char ch=input[i];
        string right=input.substr(0,i);
        string left=input.substr(i+1);
        string ans=left+right;
        permutations(ans,output+ch);
    }
}
int main(){
    permutations("abc"," ");
    return 0;
}