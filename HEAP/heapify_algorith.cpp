// /*
// convert given array to heap  
// */


// #include <iostream>
// #include <vector>

// void heapify(std::vector<int>& arr, int n, int i) {
//     int largest = i; // Initialize largest as root
//     int left = 2 * i + 1; // left = 2*i + 1
//     int right = 2 * i + 2; // right = 2*i + 2

//     // If left child is larger than root
//     if (left < n && arr[left] > arr[largest])
//         largest = left;

//     // If right child is larger than largest so far
//     if (right < n && arr[right] > arr[largest])
//         largest = right;

//     // If largest is not root
//     if (largest != i) {
//         std::swap(arr[i], arr[largest]);

//         // Recursively heapify the affected sub-tree
//         heapify(arr, n, largest);
//     }
// }

// void buildHeap(std::vector<int>& arr, int n) {
//     // Index of last non-leaf node
//     int startIdx = (n / 2) - 1;

//     // Perform reverse level order traversal from last non-leaf node and heapify each node
//     for (int i = startIdx; i >= 0; i--) {
//         heapify(arr,