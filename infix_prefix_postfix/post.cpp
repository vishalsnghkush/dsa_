#include<iostream>
#include<stack>
using namespace std;

int prior(char ch) {
    if (ch == '+' || ch == '-') return 1;
    else return 2;
}

string solve(char ch, string val1, string val2) {
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}

int main() {
    stack<string> val;
    stack<char> op;
    string s = "(7+9)*4/8-3";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') continue; // Ignore spaces
        
        if (s[i] >= '0' && s[i] <= '9') val.push(to_string(s[i] - '0')); // Corrected condition
        else {
            if (op.size() == 0 || s[i] == '(') op.push(s[i]);
            else if (s[i] == ')') {
                while (op.top() != '(') {
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(ch, val1, val2);
                    val.push(ans);
                }
                op.pop();
            }
            else if (prior(s[i]) > prior(op.top())) op.push(s[i]);
            else {
                while (op.size() > 0 && prior(s[i]) <= prior(op.top())) {
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(ch, val1, val2);
                    val.push(ans);
                }
                op.push(s[i]); // Moved this line to ensure correct logic
            }
        }
    }

    while (op.size() > 0) {
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(ch, val1, val2);
        val.push(ans);
    }

    cout << val.top();
    return 0;
}
