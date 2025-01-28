#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    // is me smallest ko last me le jaye jata hai
    for(int i=0;i<n;i++){
        int indx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[indx]){
                indx=j;
            }
            swap(arr[i],arr[indx]);
        }
    }
    // priting
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
