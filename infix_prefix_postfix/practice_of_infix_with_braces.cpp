#include<iostream>
#include<stack>
using namespace std;

int prio(char ch) {
    if (ch == '+' || ch == '-') return 1;
    else if (ch == '*' || ch == '/') return 2; // Ensure all operators are handled
    return 0; // Default priority for non-operators
}

int solve(int val1, int val2, char ch) {
    if (ch == '+') return val1 + val2;
    else if (ch == '-') return val1 - val2;
    else if (ch == '*') return val1 * val2;
    else if (ch == '/') return val1 / val2;
    return 0; // Default return for invalid operators
}

int main() {
    string s = "3+(3-4)*4/2-2";
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') continue; // Ignore spaces

        if (s[i] >= '0' && s[i] <= '9') {
            val.push(s[i] - '0');
        } else {
            if (op.empty() || s[i] == '(') {
                op.push(s[i]);
            } else if (s[i] == ')') {
                while (!op.empty() && op.top() != '(') {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                if (!op.empty() && op.top() == '(') {
                    op.pop(); // Pop the '('
                }
            } else if (prio(s[i]) > prio(op.top())) {
                op.push(s[i]);
            } else {
                while (!op.empty() && prio(s[i]) <= prio(op.top())) {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while (!op.empty()) {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }

    cout << val.top();
    return 0;
}
