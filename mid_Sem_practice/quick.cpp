#include <iostream>
#include <vector>
using namespace std;

// Function to partition the array
int partition(vector<int>& arr, int si, int ei) {
    int pivot_element = arr[si];
    int count = 0;

    // Count elements less than the pivot element
    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] < pivot_element) {
            count++;
        }
    }

    // Find the pivot index and place the pivot element in its correct position
    int pivot_index = si + count;
    swap(arr[si], arr[pivot_index]);

    // Move elements to their correct position
    int i = si, j = ei;
    while (i < pivot_index && j > pivot_index) {
        if (arr[i] < pivot_element) {
            i++;
        } else if (arr[j] >= pivot_element) {
            j--;
        } else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivot_index;
}

// Function to perform quicksort
void quickSort(vector<int>& arr, int si, int ei) {
    if (si >= ei) return;

    int pi = partition(arr, si, ei);

    quickSort(arr, si, pi - 1);
    quickSort(arr, pi + 1, ei);
}

int main() {
    vector<int> arr = {6, 4, 8, 9, 3, 6};
    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
