//
// Created by 21383 on 2025/11/10.
//

#ifndef MAIN_TASK_TEMP_H
#define MAIN_TASK_TEMP_H

// #include "../../Int/LinearList/SequentialList/List.h"
#include "../../Int/LinearList/LinkedList/List.h"

static void run() {
    printf("输入链表结点的值,以-1结束:");
    List *list = Create();

    printf("输出链表: ");
    Print(list);

    printf("请输入插入位置和插入元素的值:");
    int position,value;
    scanf("%d %d",&position,&value);
    printf("在第%d个节点前插入%d: ",position,value);
    Insert(list, position,value);
    Print(list);

    printf("请输入删除位置:");
    scanf("%d",&position);
    printf("删除第%d个结点",position);
    Remove(list,position);
    Print(list);
}

#endif //MAIN_TASK_TEMP_H