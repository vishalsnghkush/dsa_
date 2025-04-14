#include<bits/stdc++.h>
using namespace std;
void permutations(string &str,int i){
    if(i==str.size()-1){
        cout<<str<<"\n";
        return;
    }
    for(int indx=0;indx<str.size();indx++){
        swap(str[indx],str[i]);
        permutations(str,i+1);
        swap(str[indx],str[i]);
    }
}
int main(){
    string str="abc";
    permutations(str,0);
    return 0;
}