#include "iostream"
#include "cmath"
using namespace std;//解决对于1～n的所有排列组合
int b[3]={1,2,3};
int main() {
    //必须首先已经排好序了 由小到大是next_permutation();由大到小是prev_permutation()
    do {
        for (int i = 0; i < 3; ++i) {
            cout << b[i];
        }
        cout<<endl;
    } while (next_permutation(b, b + 3));

}



//
// Created by 左政 on 2023/10/18.
//
