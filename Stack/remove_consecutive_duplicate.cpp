// e.g "aaabbcddaabffg"
// " a b c d a b f g"

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string removeConsecutive(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s="";
    while (st.size()>0)
    {
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
        return s;
}
int main(){
    string s="aaabbcddaabffg";
    s=removeConsecutive(s);
    return 0;
}