#include<iostream>
using namespace std;

void printsum(int arr[][3], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int r = 0; r < row; r++) {
        int sum = 0;
        for(int c = 0; c < col; c++) {
            sum += arr[r][c];
        }
        cout << sum << " ";
    }

    cout << endl;
}

int main() {
    // create 2d array 
    int arr[3][3];

    // taking input
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // print
    cout << "Printing the elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of row 3: ";
    printsum(arr, 3, 3);

    return 0;
}
