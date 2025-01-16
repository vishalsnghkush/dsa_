#include<iostream>
#include <bits/stdc++.h>
int maze(int sr,int sc,int er,int ec){
    if(sr==er && sc==ec) return 1;
    if(sr>er || sc>ec) return 0;
    int rightway=maze(sr,sc+1,er,ec);
    int leftway=maze(sr+1,sc,er,ec);
    return  rightway +  leftway;
}
using namespace std;
int main(){

    // for 3*3
    maze(1,1,3,3);
    return 0;
}
