#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        // for round 1 to n-1

        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[5] = {43, 32, 12, 33, 9};

    cout << "Original array: ";
    printArray(arr, 5);

    BubbleSort(arr, 5);

    cout << "Sorted array: ";
    printArray(arr, 5);

    return 0;
}
