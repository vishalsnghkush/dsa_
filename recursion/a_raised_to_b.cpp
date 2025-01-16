#include<iostream>
using namespace std;
int a_raised_b(int a,int b){
    //a*a*...b times;
    if(b==0) return 1;
    return a * a_raised_b(a,b-1);
}
int main(){
    int a,b;
    cout<<"Enter the no's: ";
    cin>>a>>b;
    cout<<a_raised_b(a,b);
    return 0;
}