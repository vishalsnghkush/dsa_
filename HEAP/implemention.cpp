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
        if(indx<1) cout<<"No element found ! ";
        else return arr[1];
    }
    int size(){
        return indx-1;
    }

    void push(int x){

        arr[indx]=x;
        int i=indx++;

        // swap

        while(i!=1){
            int parent=i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
                i=parent;
            }
            else break;
        }
    }
        void pop(){
            if (indx <= 1) { // Handle empty heap case
                cout << "Heap is empty!" << endl;
                return;
            }
            indx--;
            arr[1] = arr[indx]; // Replace root with last element
            int i = 1;
            while(true){
                int left=2*i,right=2*i+1;
                if(left>indx-1) break;
                if(right>indx-1){
                    if(arr[i]>arr[left]){
                        swap(arr[i], arr[left]);
                        i = left; // Move down to left child
                    }
                    else break;
                }
                else { // Both children
                    if (arr[left] < arr[right] && arr[left] < arr[i]) {
                        swap(arr[i], arr[left]);
                        i = left; // Move down to left child
                    }
                    else if (arr[right] < arr[left] && arr[right] < arr[i]) {
                        swap(arr[i], arr[right]);
                        i = right; // Move down to right child
                    } 
                    else {
                        break; // Heap property satisfied
                    }
                }
            }
        }
    };
    
    int main() {
        MinHeap pq;
        pq.push(10);
        pq.push(1); // Uncommented for full testing
        pq.push(14);
        pq.push(11);
        pq.push(12);
        pq.push(13);
        pq.push(4);
    
        cout << "Top: " << pq.top() << endl; // Should print the smallest element
        pq.pop();
        cout << "Top after pop: " << pq.top() << endl; // Should print the next smallest element
        cout << "Size: " << pq.size() << endl; // Validate heap size
    
        return 0;
    }