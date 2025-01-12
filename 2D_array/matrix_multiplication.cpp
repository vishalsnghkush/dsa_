#include <iostream>
using namespace std;
void multiplication(int matrix1[3][3],int matrix2[3][3],int matrix3[3][3]){
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix3[i][j]=0;
            for(int k=0;k<n;k++){
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}
int main() {
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int matrix2[3][3]={
        {1, 2, 3},
        {4, 5, 5},
        {6, 7, 8}
    };
    int matrix3[3][3];
    multiplication(matrix1,matrix2,matrix3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
