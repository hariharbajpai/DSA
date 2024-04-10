#include<iostream>
using namespace std;

bool search(int *arr, int size, int key) {
    // Base case
    if (size == 0) {
        return false;
    }
    if (arr[0] == key) {
        return true;
    } else {
        bool remainingpart = search(arr + 1, size - 1, key);
        return remainingpart;
    }
}

int main() {
    int arr[5] = {3, 2, 5, 6, 1};
    int size = 5;
    int key = 3;
    bool ans = search(arr, size, key); // Pass size instead of ans

    if (ans) {
        cout << "present" << endl;
    } else {
        cout << "not present" << endl;
    }
    return 0;
}
