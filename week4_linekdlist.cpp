#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(0);
    ListNode* p = l1, *q = l2, *current = dummyHead;
    int carry = 0;
    while (p != NULL || q != NULL) {
        int x = (p != NULL) ? p->val : 0;
        int y = (q != NULL) ? q->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
        if (p != NULL) p = p->next;
        if (q != NULL) q = q->next;
    }
    if (carry > 0) {
        current->next = new ListNode(carry);
    }
    return dummyHead->next;
}

// Helper function to print the linked list
void printList(ListNode* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    // Example usage
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result = addTwoNumbers(l1, l2);
    printList(result); // Output: 7 0 8

    return 0;
}
