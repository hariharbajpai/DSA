#include<iostream>
using namespace std;

class stack {
   public: 
    int top;
    int *arr;
    int size;
    
    stack() {
        top = -1;
        size = 10;
        arr = new int[size];
    }  
    
    void push(int element) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
        }
        else {
            top++;
            arr[top] = element;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        }
        else {
            top--;
        }
    }

    void isEmpty() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "Stack is not empty" << endl;
        }
    }
    int peek() {
        if (top >= 0 && top < size) {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
            return -1; // or any other value to indicate failure
        }
    }
    void display() {
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to deallocate memory
    ~stack() {
        delete[] arr;
    }
};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << "================================================================" << endl;
    s.display();
    cout << "================================================================" << endl;

    s.isEmpty();
    cout << "================================================================" << endl;
    cout << "Top element of the stack: " << s.peek() << endl;
    s.pop();
    cout << "================================================================" << endl;
    s.display();
    cout << "================================================================" << endl;

    return 0;
}
