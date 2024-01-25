#include <iostream>
using namespace std;

// Function for linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return the index where key is found
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {12, 34, 54, 2, 3}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of array
    int key = 54; // Key to be searched

    // Call linear search function
    int index = linearSearch(arr, n, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
