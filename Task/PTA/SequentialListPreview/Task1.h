//
// Created by 21383 on 2025/11/9.
//

#ifndef MAIN_TASK1_H
#define MAIN_TASK1_H

#include "../../../Int/LinearList/SequentialList/List.h"
#include <stdio.h>

static void run() {
    List listTest;
    Init(&listTest);
    printf("%d\n", getLength(&listTest));
    printf("%d\n", isEmpty(&listTest));
    Append(&listTest, 2);
    Append(&listTest, 5);
    Append(&listTest, 3);
    Append(&listTest, 7);
    Output(&listTest);
    Insert(&listTest, 2, 4);
    Insert(&listTest, 1, 6);
    int x;
    Pop(&listTest, 4, &x);
    printf("%d\n", x);
    Insert(&listTest, 6, 8);
    Pop(&listTest, 1, &x);
    printf("%d\n", x);
    Pop(&listTest, 5, &x);
    printf("%d\n", x);
    printf("%d\n", getLength(&listTest));
    printf("%d\n", isEmpty(&listTest));
    printf("%d\n", x);
    Output(&listTest);
    Append(&listTest, 8);
    Append(&listTest, 0);
    Append(&listTest, 5);
    Output(&listTest);
    Clear(&listTest);
    Output(&listTest);
    Insert(&listTest, 1, 1);
    Insert(&listTest, 1, 2);
    Insert(&listTest, 1, 3);
    Output(&listTest);
}

#endif //MAIN_TASK1_H