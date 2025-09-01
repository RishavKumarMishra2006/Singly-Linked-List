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
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
