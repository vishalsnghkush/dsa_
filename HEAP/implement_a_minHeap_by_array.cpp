#include<iostream>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int indx;
    MinHeap(){
        indx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int val){
        arr[indx]=val;
        int i=indx;
        indx++;
        // swapping of i with parent till i==1; 

        while(i!=1){
            int parent=i/2;
            if(arr[i]<arr[parent]){
                // swap
                swap(arr[i],arr[parent]);

            }
            else break;
            i=parent;
        }   
    }   
    void pop(){
        if(indx == 1) return; // if heap is empty, do nothing
        // jo last element hai usko indx-1 pr le ke jao
        indx--;
        arr[1]=arr[indx];
        int i=1;

        // rearrangement
        while(true){
            int left=2*i,right =2*i+1;

            if(right>indx-1) {
                if(arr[i] > arr[left]) {
                    swap(arr[i], arr[left]);
                    i = left;
                } 
                else {
                    break;
                }
            }
            else {
                if(arr[left] < arr[right] && arr[i] > arr[left]) {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else if(arr[i] > arr[right]) {
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else {
                    break;
                }
            }
        }
    }

};
int main(){
    /* i need to to start the element from 1 to n element index
    for a node at  i then left child is 2*i and right child is 2i+1;
    parent is at i/2
    */
    MinHeap pq;
    pq.push(10);
    pq.push(2);    
    pq.push(14); 
    pq.push(11); 
    pq.push(1); 
    pq.push(4); 
    pq.push(13);
    pq.push(20); 
    pq.push(0); 
    cout<<pq.top()<<endl;
    return 0;
}