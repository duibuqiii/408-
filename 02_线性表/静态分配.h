//
// Created by 15952 on 2026/5/24.
//

#ifndef INC_408_顺序表的静态分配_H
#define INC_408_顺序表的静态分配_H

#include "iostream"
#define MaxSize 10

typedef struct {
    int data[MaxSize];
    int length;

} SqList;

void InitList(SqList &L){
    for (int i = 0; i < MaxSize ; ++i) {
        L.data[i] = 0;
    }
    L.length = 0;

}

#endif //INC_408_顺序表的静态分配_H
