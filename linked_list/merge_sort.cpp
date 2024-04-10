#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int val) : val(val), next(nullptr) {}
    ListNode(int val, ListNode* next) : val(val), next(next) {}
};

ListNode* findmid(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* merge(ListNode* left, ListNode* right) {
    if (left == nullptr) return right;
    if (right == nullptr) return left;

    ListNode* dummy = new ListNode();
    ListNode* tail = dummy;

    while (left != nullptr && right != nullptr) {
        if (left->val <= right->val) {
            tail->next = left;
            left = left->next;
        } else {
            tail->next = right;
            right = right->next;
        }
        tail = tail->next;
    }

    if (left != nullptr) tail->next = left;
    if (right != nullptr) tail->next = right;

    ListNode* mergedList = dummy->next;
    delete dummy;
    return mergedList;
}

ListNode* mergesort(ListNode* head) {
    // Base case
    if (head == nullptr || head->next == nullptr) return head;

    // Find the midpoint
    ListNode* mid = findmid(head);
    ListNode* lefthalf = head;
    ListNode* righthalf = mid->next;
    mid->next = nullptr;

    // Recursive calls
    lefthalf = mergesort(lefthalf);
    righthalf = mergesort(righthalf);

    // Merge left and right halves
    return merge(lefthalf, righthalf);
}

int main() {
    // Create a sample linked list
    ListNode* head = new ListNode(3);
    head->next = new ListNode(1);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);

    // Sort the linked list using merge sort
    head = mergesort(head);

    // Print the sorted linked list
    cout << "Sorted Linked List: ";
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    cout << endl;

    return 0;
}
