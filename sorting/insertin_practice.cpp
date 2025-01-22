#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={ 64, 34, 25, 12, 22, 11, 90 };
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>arr[j-1]) break;
            else 
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<"printing"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}