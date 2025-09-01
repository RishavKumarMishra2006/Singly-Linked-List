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
struct Node* deleteNode(struct Node* head, int pos) {
    if (!head) return NULL;
    if (pos == 1) {
        struct Node* temp = head->next;
        free(head);
        return temp;
    }
    struct Node* curr = head;
    for (int i = 1; curr && i < pos-1; i++) curr = curr->next;
    if (curr && curr->next) {
        struct Node* temp = curr->next;
        curr->next = temp->next;
        free(temp);
    }
    return head;
}
