#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    int arr[]={5,6,7,3,8,2,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ansIndx[n];
    ansIndx[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
        //pop
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        //ans
        if(st.size()==0) ansIndx[i]=-1;
        else ansIndx[i]=st.top();
//push
        st.push(i);
    }

}
// pop ans push

// reverse tarike se travel kro
