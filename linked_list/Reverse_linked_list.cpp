#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// RECURSION
void reverse(ListNode* &head , ListNode* &curr, ListNode* prev) {
    // Base case
    if (curr == nullptr) {
        head = prev;
        return;
    }
    ListNode* forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        reverse(head, curr, prev);
        return head;
    }
};

int main() {
    // Test your implementation here
    return 0;
}
