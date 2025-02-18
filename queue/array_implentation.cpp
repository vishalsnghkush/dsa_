#include<iostream>
using namespace std;
class Queue{
public:
    int arr[8];
    int front;
    int rear;
    Queue(){
        front=0;
        rear=0;
    }
void push(int val){
    if(rear==8){
        cout<<"Queue is full : "<<endl;
        return;
    }
    arr[rear]=val;
    rear++;
}
void pop(){
    if(front-rear==0){ cout<<"Queue is empty !";
    return ;
}

    front++;
}
int top(){
    if(front-rear==0){ cout<<"Queue is empty !";
        return -1;
    }
    return arr[front];
}
int size(){
    return rear-front;
}
bool empty(){
    if(front-rear==0) return true;
    else return false;
}
void display(){
    for(int i=front;i<rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
int main(){
    Queue q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.pop();
    q.display();
    cout<<q.empty();
    return 0;
}