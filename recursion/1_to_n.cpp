#include<iostream>
using namespace std;

void print_1_to_n(int number, int limit) {
    if (number > limit) return;
    cout << number << " ";
    print_1_to_n(number + 1, limit);
}

int main() {
    int n;
    cout << "Enter the number you want to print up to: ";
    cin >> n;
    print_1_to_n(1, n);
    return 0;
}
