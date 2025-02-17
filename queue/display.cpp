#include <iostream>
#include <queue>
#include<stack>
using namespace std;

void display(queue<int>& q) {
    queue<int> temp;
    while (q.size() > 0) {
        temp.push(q.front());
        cout << q.front() << " ";
        q.pop();
    }
    while (temp.size() > 0) {
        q.push(temp.front());
        temp.pop();
    }
}

void reverse(queue<int>& q) {
    // for reversing the no in queue i need stack
    stack<int> st;
    //empty the queue into the stack
    while(q.size()>0){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    // empty the stack into the queue
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    cout << "Queue: ";
    display(q);
    cout << endl;
    reverse(q);
    cout << endl;
    display(q);
    return 0;
}
