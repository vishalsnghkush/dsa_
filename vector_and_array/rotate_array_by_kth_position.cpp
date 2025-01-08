#include <iostream>
#include <vector>
using namespace std;

// Function to perform a single rotation
void kth_rotation(vector<int>& v, vector<int>& new_array) {
    // Perform one right rotation
    int temp = v[0];
    for (int i = 0; i < v.size() - 1; i++) {
        new_array[i] = v[i + 1];
    }
    new_array[v.size() - 1] = temp;

    // Copy new_array back to v
    for (int i = 0; i < v.size(); i++) {
        v[i] = new_array[i];
    }
}

int main() {
    vector<int> v;
    int n, x, k;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    v.resize(n); // Resize the vector to hold n elements
    vector<int> new_array(n); // Resize new_array to hold n elements

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cout << "Enter the kth rotation element: ";
    cin >> k;

    // Perform k rotations
    for (int i = 0; i < k; i++) {
        kth_rotation(v, new_array);
    }

    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
