#include<iostream>
using namespace std;
void transpose(int matrix[3][3]){
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    transpose(matrix);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}