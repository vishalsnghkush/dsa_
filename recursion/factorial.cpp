#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1||n==0) return n;
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the no you want's to print :";
    cin>>n;
    int x=factorial(n);
    cout<<x;
    return 0;
}