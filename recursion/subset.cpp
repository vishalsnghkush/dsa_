#include<iostream>
using namespace std;
void subset(string ans,string orginal){
    //set of all the subset:
    if(orginal==""){
        cout<<ans<<endl;
        return;
    }
    char ch=orginal[0];
    subset(ans+ch,orginal.substr(1));
    subset(ans,orginal.substr(1));
}
int main(){
    string str="abc";
    subset("",str);
    return 0;
}