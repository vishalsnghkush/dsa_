#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    int arr[]={5,6,7,3,8,2,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    ans[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        //pop
        while(st.size()>0 && arr[i]>=st.top()){
            st.pop();
        }
        //ans
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        //push
        st.push(arr[i]);
    }

}
// pop ans push

// reverse tarike se travel kro
