#include<iostream>
#include<vector>
using namespace std;
void reverse_max(vector<int>& v) 
{ int n = v.size(); if (n == 0) return; 
// Create a new vector to store the reversed max values 
vector<int> reversed_max(n, 0); 
reversed_max[n - 1] = -1; // Last element will be -1 
// Traverse the vector from the end 
for (int i = n - 2; i >= 0; --i) {
     reversed_max[i] = max(v[i + 1], reversed_max[i + 1]); 
     } 
// Print the result (optional)
 for (int i = 0; i < n; ++i) {
     cout << reversed_max[i] << " "; } cout << endl; 
     }
void previous_max(vector<int>&v){
    //   -1 0 1 1 2 2 2 2 3 3 3 3
    //   0 1 0 2 1 0 1 3 2  1  2  1  =14
    //   0 1 1 3 4 4 5 8 10 11 13 14
    //   -1 1 0 2 1 0 1 3 2  1  2  1
    //   -1 1 1 2 2 2 2 3 3  3  3  3
     if (v.empty()) return;
        v[0] = -1;
    int start = 1; // Start from the second element since v[0] is already set
    
    while (start < v.size()) {
        v[start] = max(v[start - 1], v[start]);
        start++;
    }
}
int main(){
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
    previous_max(v);
    reverse_max(v);
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

//for rain problem i need to do the minimum of the previous max and reverse max 
// and then  subtract with v[i] i.e height