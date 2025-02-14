#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    int arr[]={5,6,7,3,8,2,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    ans[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        // pop all the element smaller than arr[]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark  the ans in ans array
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        // push
        st.push(arr[i]);
    }

}
// pop ans push

// reverse tarike se travel kro
