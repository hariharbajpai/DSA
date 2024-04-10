#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Function to create a new reversed queue
queue<int> reverseQueue(queue<int> originalQueue) {
  stack<int> tempStack;

  // Move all elements from the original queue to the stack (reversed order)
  while (!originalQueue.empty()) {
    tempStack.push(originalQueue.front());
    originalQueue.pop();
  }

  queue<int> reversedQueue;

  // Move all elements from the stack to the new reversed queue
  while (!tempStack.empty()) {
    reversedQueue.push(tempStack.top());
    tempStack.pop();
  }

  return reversedQueue;  // Return the new reversed queue
}

int main() {
  queue<int> myQueue;

  // Add elements to the queue
  myQueue.push(1);
  myQueue.push(2);
  myQueue.push(3);

  cout << "Original queue: ";
  queue<int> originalCopy = myQueue; // Create a copy of the original queue to print
  while (!originalCopy.empty()) {
    cout << originalCopy.front() << " ";
    originalCopy.pop();
  }
  cout << endl;

  // Get the reversed queue (doesn't modify the original queue)
  queue<int> reversedQueue = reverseQueue(myQueue);

  cout << "Reversed queue: ";
  while (!reversedQueue.empty()) {
    cout << reversedQueue.front() << " ";
    reversedQueue.pop();
  }
  cout << endl;

  return 0;
}
