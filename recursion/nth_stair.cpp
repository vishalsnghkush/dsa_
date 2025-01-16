#include<iostream>
using namespace std;
int stair_nth(int n){
    if (n==1 || n==2 )  return n;
    return stair_nth(n-1)+stair_nth(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<stair_nth(n);
    return 0;
}