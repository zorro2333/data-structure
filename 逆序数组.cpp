//
// Created by 左政 on 2024/3/2.
//
#include "all.h"
void reverseArray(int *a,int count){
    int *tmp;
    tmp= (int*) malloc(count);
    for(int j=count-1;j>=0;j--){
        tmp[count-j-1]=a[j];
    }
    for(int j=0;j<count;++j){
        a[j]=tmp[j];
    }
    free(tmp);
}
void prinfArray(int *a,int count) {
    for (int i = 0; i < count; ++i) {
        ::printf("%d", a[i]);
    }
}