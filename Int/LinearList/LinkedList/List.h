//
// Created by 21383 on 2025/11/17.
//

#ifndef MAIN_LIST_H
#define MAIN_LIST_H
#include <stdio.h>
#include <stdlib.h>


typedef int ElemType;

typedef struct Node {
    ElemType data;
    struct Node *next;
} List, *Node;

static void beforeAppend(List *_l, ElemType _e) {
    Node _newNode = (Node) malloc(sizeof(Node));
    _newNode->data = _e;
    _newNode->next = _l->next;
    _l->next = _newNode;
}

static void append(List *_l, ElemType _e) {
    Node _newNode = (Node) malloc(sizeof(Node));
    _newNode->data = _e;
    _newNode->next = NULL;

    if (_l->next == NULL) {
        _l->next = _newNode;
        return;
    }

    Node _p = _l->next;
    while (_p->next) _p = _p->next;
    _p->next = _newNode;
}

static void insert(List *_l, int _position, ElemType _e) {
    Node _p = _l->next;
    for (int i = 1; i < _position-1; i++)
        _p = _p->next;
    Node _newNode = (Node) malloc(sizeof(Node));
    _newNode->data = _e;
    _newNode->next = _p->next;
    _p->next = _newNode;
}

static void Remove(List *_l, int _position) {
    Node _p = _l->next;
    for (int i = 1; i < _position-1; i++)
        _p = _p->next;
    Node _remove = _p->next;
    _p->next = _remove->next;
    free(_remove);
}


static Node create() {
    Node _node = (Node) malloc(sizeof(Node));
    ElemType _e;
    _node->next = NULL;
    scanf("%d", &_e);
    while (_e != -1) {
        // beforeAppend(_node,_e);
        append(_node, _e);
        scanf("%d", &_e);
    }
    return _node;
}

static void print(List *_l) {
    Node _node = _l->next;
    while (_node) {
        printf("%d ", _node->data);
        _node = _node->next;
    }
    printf("\n");
}

#endif //MAIN_LIST_H
