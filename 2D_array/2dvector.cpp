#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<vector<int>>v;// here i initilized an two array v;
    // v.push_back(5) is an illegal to do as in the braces there is an vector of vector so it take input in vector;
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v.push_back(v1);
    cout<<v[0][4];
    //for calculating the row and col;
   int row=v.size();
   int col=v[0].size();
}