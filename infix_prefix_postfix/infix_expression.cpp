// <!-- expration that are human rediable and solvable
// str ==  "2+6*4/8-3" -->
#include<iostream>
#include<stack>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else if(ch=='/') return val1/val2;
}
int priority(char ch){
    if(ch=='+' || ch =='-') return 1;
    else return 2;
}
int main(){
    string s="2+6*4/8-3"; // called string infix exprassion
    // to solve this we will use stack(2) ...
    // 1st stack will be of val and second of will be operator
    /*
    1. if s[i] is a digit then push them into the stack of value
    2. if s[i] is + - / * then 
    a. if operant stack is empty then push 
    b. if priority(operant.top)<priority(S[i])  then push
    c.. while ....>= .....then solve


    char ch=  operant hoga
    int val2==st.top
    st.top  pop
    int val1=st.top'

    */
    stack<int>val;
    stack<char>operant;

    for(int i=0;i<s.size();i++){
        // chack if s[i] is digit (0-9)
        if(s[i]>=48 && s[i] <=57){
            val.push(s[i]-48);  // type casting

        }
        else{ // not an digit
            if(operant.size()==0 || priority(s[i])>priority(operant.top()))  operant.push(s[i]);
            else { // calculate priority of s[i]<=priority(operant.top()) i have to calculate val1 operant val2
                while(operant.size()>0 && priority(s[i])<=priority(operant.top())){
                    char ch=operant.top();
                    operant.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                operant.push(s[i]); // operant ko push bhi to krna hai ma

            }
        }
    }
    // the operator stack can have value /
    // so make it empty

    while(operant.size()>0){
        char ch=operant.top();
        operant.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans);
    }
 cout<<val.top();
    return 0;
}