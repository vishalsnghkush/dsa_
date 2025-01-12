#include <iostream>
using namespace std;

void transpose(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void reverse_rows(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0, k = 2; j < k; j++, k--) {
            swap(matrix[i][j], matrix[i][k]);
        }
    }
}

void rotation_by_ninty_deg(int matrix[3][3]) {
    transpose(matrix);
    reverse_rows(matrix);
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    rotation_by_ninty_deg(matrix);
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
