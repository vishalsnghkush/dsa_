#include<iostream>
#include<stack>
using namespace std;

int prio(char ch) {
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}

string solve(string val1, string val2, char ch) {
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}

int main() {
    string s = "2+6*4/8-3";
    stack<string> val;
    stack<char> ope;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') continue; // Skip spaces
        
        if(s[i] >= '0' && s[i] <= '9') {
            val.push(to_string(s[i] - '0'));
        } 
        else {
            if(ope.size() == 0 || s[i] == '(') {
                ope.push(s[i]);
            } 
            else if(s[i] == ')') {
                while(ope.top() != '(') {
                    char ch = ope.top();
                    ope.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                ope.pop(); // this will clear ( symbol if present
            }
            else if(prio(s[i]) > prio(ope.top())) {
                ope.push(s[i]);
            }
            else {
                while(ope.size() > 0 && prio(s[i]) <= prio(ope.top())) {
                    char ch = ope.top();
                    ope.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                ope.push(s[i]); // Move this line out of the else block to prevent multiple pushes
            }
        }
    }

    while(ope.size() > 0) {
        char ch = ope.top();
        ope.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }

    cout << val.top();
    return 0;
}
