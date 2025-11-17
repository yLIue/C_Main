//
// Created by 21383 on 2025/11/10.
//

#ifndef MAIN_BUBBLE_SORT_H
#define MAIN_BUBBLE_SORT_H

typedef int ElemType;

static void BubbleSort(ElemType _l[],int _len) {
    for(int i=0;i<_len;i++) {
        int _count = 0;
        for(int j=0;j<_len-1;j++) {
            if(_l[j]>_l[j+1]) {
                ElemType _temp = _l[j];
                _l[j] = _l[j+1];
                _l[j+1] = _temp;
                _count++;
            }
        }
        if(!_count){
            break;
        }
    }
}

#endif //MAIN_BUBBLE_SORT_H