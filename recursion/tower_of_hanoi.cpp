#include<iostream>
using namespace std;
void hanoi(int n,char source,char helper,char destination){
    if(n==0) return;
    hanoi(n-1,source,destination,helper);
    cout<<source<<"->"<<destination<<endl;
    hanoi(n-1,helper,source,destination);
}
int main(){
    int n=3;
    hanoi(n,'A','B','C');
    return 0;
}