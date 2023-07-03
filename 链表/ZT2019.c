#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"

int main(int argc, char **argv) {

    LNode* node1 = (LNode*)malloc(sizeof(LNode));
    LNode* node2 = (LNode*)malloc(sizeof(LNode));
    LNode* node3 = (LNode*)malloc(sizeof(LNode));

    // 设置节点的数据
    node1->data = 1;
    node2->data = 2;
    node3->data = 3;

    // 构建链表
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // 使用链表
    LinkList list = node1;
    
    printList(list);

    // 释放内存
    free(node1);
    free(node2);
    free(node3);
    
    return 0;
}