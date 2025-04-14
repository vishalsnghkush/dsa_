/*
A board of lenght M and width N is given. The task is to break thsi board into M*N square such 
that cost of breaking is min. The cutting cost for each edge will be given for the board in two array
X[] and Y[]. In short you need to choose such a sequence of cutting such that cost is
minimized. Return the minimized cost

*/

#include<bits/stdc++.h>
using namespace std;

bool cmp(int x,int y){
    return x>y;
}


// same as merge sort!! bus har ek cut ke baad horizontal me verticle ka count badh jayega and vise versa

int minCostToBreakGrid(int n,int m,vector<int>&X,vector<int>&Y){
    sort(X.begin(),X.end(),cmp); // verticles cuts cost
    sort(Y.begin(),Y.end(),cmp);
    int hz=1; // horizontal count
    int vr=1; // verticle count
    int h=0,v=0;
    int ans=0;
    while(h<Y.size() && v<X.size()){
        if(X[v]>Y[h]){
            ans+=X[v]*vr;
            hz++;

            v++;
        }
        else{
           ans+=Y[h]*hz;
           vr++;

           h++;
        }
    }

    while(h<Y.size()){
        ans+=Y[h]*hz;
           vr++;

           h++;
    }


    while(v<X.size()){
        ans+=X[v]*vr;
            hz++;

            v++;
    }

    return ans;
}
int main(){
    int n,m;
    
    return 0;
}