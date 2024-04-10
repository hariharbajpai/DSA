#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}

int main() {
    int arr[5] = {43, 32, 12, 33, 9};

    cout << "Original array: ";
    printArray(arr, 5);

    InsertionSort(arr, 5);

    cout << "Sorted array: ";
    printArray(arr, 5);

    return 0;
}
