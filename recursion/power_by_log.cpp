#include<iostream>
using namespace std;

int a_raised_b(int a, int b) {
    if (b == 0) return 1;
    int x = a_raised_b(a, b / 2);
    if (b % 2 == 0) {
        return x * x;
    } else {
        return a * x * x;
    }
}

int main() {
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    cout << a << " raised to the power of " << b << " is " << a_raised_b(a, b) << endl;
    return 0;
}
