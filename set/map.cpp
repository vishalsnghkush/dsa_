/* 
frequency array /sets
key (val;/index)
insertion,,deletion,and,searching all done in O(n) T.C
*/
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m; // pair class bolte hai
    pair<int,int>p;// ye pair hai
    m.insert({"Vishal",20});
    m.insert({"Kushwaha",20});
    m.insert({"Vishal",20});
    m.insert({"Jaya",20});
    m.insert({"Jaiswal",20});
    // for printing
    for(auto p :m ){
        cout<<p.first<<" "<<p.second<<endl;
    }

    m.erase("Vishal");
    cout<<endl;
    for(auto p :m ){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}