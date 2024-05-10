#include<iostream>
using namespace std;

class heap {
public:
    int arr[100]; // Corrected: Array of integers
    int size = 0;

    void insert(int val) { // Changed parameter to int
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = (index / 2);
            if (arr[parent] < arr[index]) {  
                swap(arr[parent], arr[index]);
                index = parent;  
            }
            else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {  
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};  

int main() {
    heap h;
    h.insert(10);
    h.insert(33);
    h.insert(30);
    h.insert(44);
    h.insert(21);
    h.insert(60);

    h.print();
    return 0;
}
