#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct Node {
    int data;
    struct Node* next;
} node;

node* head = NULL;
node* tail = NULL;
int nodeCount = 0;

int enqueue(int element) {
    node* current = (node*)malloc(sizeof(node));
    if (current) {
        current->data = element;
        current->next = NULL;
        if (tail) {
            tail->next = current;
        } else {
            head = current;
        }
        tail = current;
        nodeCount++;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int dequeue() {
    if (head != NULL) {
        node* current = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        free(current);
        nodeCount--;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

void printQueue(void) {
    node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int getNodesCount() {
    return nodeCount;
}

void freeQueue(void) {
    while (nodeCount) dequeue();
    head = NULL;
    tail = NULL;
}
