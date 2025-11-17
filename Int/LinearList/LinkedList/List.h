//
// Created by 21383 on 2025/11/17.
//

#ifndef MAIN_LIST_H
#define MAIN_LIST_H
#include <stdio.h>
#include <stdlib.h>


typedef int ElemType;

typedef struct Node{
    ElemType data;
    struct Node *next;
}List,*Node;

static void beforeAppend(List *_l, ElemType _e) {
    Node _newNode = (Node)malloc(sizeof(Node));
    _newNode->data = _e;
    _newNode->next = _l->next;
    _l->next = _newNode;
}

static Node Create() {
    Node _node = (Node)malloc(sizeof(Node));
    ElemType _e;
    _node->next = NULL;
    scanf("%d",&_e);
    while (_e!=-1) {
        beforeAppend(_node,_e);
        scanf("%d",&_e);
    }
    return _node;
}



static void print(List *_l) {
    Node _node = _l->next;
    while (_node!=NULL) {
        printf("%d ",_node->data);
        _node = _node->next;
    }
}

#endif //MAIN_LIST_H