//
// Created by 21383 on 2025/11/9.
//

#ifndef MAIN_LIST_H
#define MAIN_LIST_H


#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define Debug 0
#define MAXSIZE 100
// #define ElemType int

typedef int ElemType;

typedef struct {
    ElemType *data;
    int length;
}List;

// init
static void Init(List *_l) {
    _l->data = (ElemType*)malloc(MAXSIZE * sizeof(ElemType));
    if (!_l->data) {
        exit(OVERFLOW);
    }
    _l->length = 0;
    if (Debug) printf("Create -创建成功\n");
}

static int getLength(List *_l) {
    return _l->length;
}

static int isEmpty(List *_l) {
    return _l->length == 0;
}

static void Append(List *_l, ElemType _value) {
    _l->data[_l->length++] = _value;
    if (Debug) printf("Append -%d-追加\n",_value);;
}

static void Output(List *_l) {
    // printf("(");
    for (int i = 0; i < _l->length; i++) {
        printf("%d", _l->data[i]);
        if (i != _l->length - 1) {
            // printf(", ");
            printf(" ");
        }
    }
    // printf(")\n");
    printf("\n");
}

static void Insert(List *_l, int _index, ElemType _value) {
    for (int i = _l->length; i > _index; i--) {
        _l->data[i] = _l->data[i - 1];
    }
    _l->data[_index] = _value;
    _l->length++;
}

static void Remove(List *_l, int _index) {
    for (int i = _index; i < _l->length; i++) {
        _l->data[i] = _l->data[i + 1];
    }
    _l->length--;
}

static void Pop(List *_l, int _index, ElemType *_value) {
    *_value = _l->data[_index];
    for (int i = _index; i < _l->length; i++) {
        _l->data[i] = _l->data[i + 1];
    }
    _l->length--;
}

static void Clear(List *_l) {
    _l->length = 0;
}

static void Destroy(List *_l) {
    free(_l->data);
}

#endif //MAIN_LIST_H