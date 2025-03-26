#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){

    // ordered wala sort kr ke de deta hai automatically

    set<int>s;
    s.insert(5);
    s.insert(3);
    s.insert(6);
    
    for(int ele : s){
        cout<<ele<<" ";
    }
}

