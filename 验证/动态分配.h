//
// Created by 15952 on 2026/5/24.
//

#ifndef INC_408_动态分配_H
#define INC_408_动态分配_H
#define InitSize 10
#include "stdlib.h"
typedef struct {
    int *data;
    int MaxSize;
    int length;
} SeqList;

void InitList(SeqList &L){
    L.data = (int*)malloc(InitSize * sizeof(int));
    L.length = 0;
}

void IncreaseList(SeqList &L,int len){
    int *p = L.data;
    L.data = (int*) malloc((InitSize + len) * sizeof (int));
    for (int i = 0; i <L.length ; ++i) {
        L.data[i] = p[i];
    }
    free(p);
}


#endif //INC_408_动态分配_H
