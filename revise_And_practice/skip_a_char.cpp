#include<iostream>
#include<string>
using namespace std;
void SkipAchar(string ans, string s){
    if(s.length()==0){
        cout<<ans;
        return;
    }
    char ch=s[0];
    if(ch=='a') SkipAchar(ans,s.substr(1));
    else SkipAchar(ans+ch,s.substr(1));
}
int main(){
    string s="Vishal";
    SkipAchar(" ",s);
    return 0;
}