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
int nthFromEnd(struct Node* head, int n) {
    struct Node* first = head, *second = head;
    for (int i = 0; i < n; i++) {
        if (!first) return -1;
        first = first->next;
    }
    while (first) {
        first = first->next;
        second = second->next;
    }
    return second->data;
}
