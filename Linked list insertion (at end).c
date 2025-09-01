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
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* node = newNode(data);
    if (head == NULL) return node;
    struct Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = node;
    return head;
}
