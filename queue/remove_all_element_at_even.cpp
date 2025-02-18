#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q) {
    queue<int> temp;
    while (q.size() > 0) {
        temp.push(q.front());
        cout << q.front() << " ";
        q.pop();
    }
    cout<<endl;
    while (temp.size() > 0) {
        q.push(temp.front());
        temp.pop();
    }
}
void remove_even_index_element(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else{
            q.push(q.front());
            q.pop();
        }
    }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    remove_even_index_element(q);
    display(q);
    return 0;
}