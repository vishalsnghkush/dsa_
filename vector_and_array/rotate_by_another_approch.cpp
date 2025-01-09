#include <iostream>
#include <vector>
using namespace std;
//kth rotation means swapping the element to kth index !!
//like 1 4 6 6 3 5 
// k=2;
//     3 5 1 4 6 6


// Function to reverse a portion of the array
void reverse(vector<int>& v, int start, int end) {
    while (start < end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

// Function to perform kth rotation using the reverse method
void rotate(vector<int>& v, int k) {
    int n = v.size();
    k = k % n; // In case k is greater than the size of the array

    // Reverse the entire array
    reverse(v, 0, n - 1);
    // Reverse the first k elements
    reverse(v, 0, k - 1);
    // Reverse the remaining n - k elements
    reverse(v, k, n - 1);
}

int main() {
    vector<int> v;
    int n, k;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    v.resize(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cout << "Enter the kth rotation element: ";
    cin >> k;

    // Perform rotation
    rotate(v, k);

    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
