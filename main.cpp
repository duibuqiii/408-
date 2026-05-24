#include <iostream>
#include "01/顺序表的动态分配.h"
int main() {
    SeqList L;
    InitList(L);
    std::cout << L.MaxSize << std::endl;
    IncreaseSize(L,5);
    std::cout << L.MaxSize << std::endl;

    return 0;
}