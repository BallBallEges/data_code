#include <stdio.h>

#ifndef x
#define x

typedef struct LNode{
    int data;
    struct LNode* next;
}LNode,*LinkList;

void printList(LinkList list) {
    LNode* currentNode = list;
    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}

#endif