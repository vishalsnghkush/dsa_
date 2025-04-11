#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>&parent,int x){
    // this return which group or clustur it belong
    if(parent[x]==x) return x;
    return parent[x]=find(parent,parent[x]);
}

void Union(vector<int>&parent,vector<int>&rank,int a,int b){
    a=find(parent,a);
    b=find(parent,b);

    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;
    }
    else{
        rank[b]++;
        parent[a]=b;
    }
}

int main(){

    return 0;
}