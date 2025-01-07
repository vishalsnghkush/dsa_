#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter the upper limit: ";
    cin >> n;
    int c=count_digit(int n);
    for(int i=1;i<n;i++){
        armstrong(i);
    }
    return 0;
}
