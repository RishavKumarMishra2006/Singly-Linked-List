#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}
struct Node* addTwoLists(struct Node* l1, struct Node* l2) {
    struct Node dummy; 
    dummy.next = NULL;
    struct Node* curr = &dummy;
    int carry = 0;

    while (l1 || l2 || carry) {
        int val1 = l1 ? l1->data : 0;
        int val2 = l2 ? l2->data : 0;
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        curr->next = newNode(sum % 10);
        curr = curr->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    return dummy.next;
}
