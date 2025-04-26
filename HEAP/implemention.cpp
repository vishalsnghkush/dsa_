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
            // heapify algorithm
            while (true) {
                int left = 2 * i, right = 2 * i + 1, smallest = i;
        
                if (left < indx && arr[left] < arr[smallest]) smallest = left;
                if (right < indx && arr[right] < arr[smallest]) smallest = right;
        
                if (smallest != i) {
                    swap(arr[i], arr[smallest]);
                    i = smallest;
                } else break;
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