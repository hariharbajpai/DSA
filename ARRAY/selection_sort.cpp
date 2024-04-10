#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Move the swap outside of the inner loop
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int arr[5] = {43, 32, 12, 33, 9};

    cout << "Original array: ";
    printArray(arr, 5);

    SelectionSort(arr, 5);

    cout << "Sorted array: ";
    printArray(arr, 5);

    return 0;
}
