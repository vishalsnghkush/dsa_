#include<iostream>
using namespace std;
void subset(int arr[],int si,int ei){
    for(int i=si;i<=ei;i++){
        for(int j=i;j<=ei;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={5,6,7,4,2,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    subset(arr,0,n-1);
    // for(int si=0;si<n;si++){
    //     for(int end=si;end<n;end++){
    //         for(int i=si;i<=end;i++){
    //             cout<<arr[i];
    //         }
    //     }
    //     cout<<endl;
    // }
    return 0;
}