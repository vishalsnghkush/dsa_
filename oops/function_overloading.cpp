// polymorphism


// compile time monoporshism and run time morphism


// creating function with same name but diffrernt paramater


// making the different function with the with same name but different parameter is valid in cpp and java

#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<a+b;
}
void add(int a){
    cout<<10+a;
}
int main(){
add(5,5);
add(5);
}