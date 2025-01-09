#include<iostream>
#include<vector>
using namespace std;
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
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

