//
// Created by 左政 on 2023/10/11.
//
#include "iostream"
using namespace std;
# define N 4
#include <stdio.h>
int q[N+1];//记录皇后的列号
int check(int j){//检查皇后的位置是否合法
    for(int i=1;i<j;++i){
        if(q[i]==q[j]||abs(q[i]-q[j])==abs(i-j)){
            return 0;
        }
    }
    return 1;
}
void queen() {//求解n皇后主方法
    int i;

    int answer = 0;//方案数
    for (i = 1; i <= N; ++i) {
        q[i] = 0;
    }
    int j = 1;//正在摆放第j个皇后
    while (j >= 1) {
        q[j] += 1;// 让第j个皇后向后一列摆放
        while (q[j] <= N && !check(j)) {//判断第j个皇后的位置是否合法
            q[j] += 1;//不合法的就向后一个位置摆放
        }
        if (q[j] <= N) {//找到了第J个皇后找到一个合法的摆放位置
            if (j == N) {//找到了N皇后的一组解
                answer += 1;
                cout << "方案" << answer << endl;
                for (int i = 1; i <= N; ++i) {
                    cout << q[i];
                }
                cout<<endl;
            } else {//继续摆放下一个皇后
                j += 1;
            }
        } else {//表示第j个皇后摆放不下了，往前面回溯
            q[j]= 0;//还原第j个皇后的位置
            j -= 1;//回溯
        }
    }
}
int main(){

queen();
return 0;
}
//#include "iostream"
//using namespace std;
//# define N 4
//#include <stdio.h>
//int q[N];//记录皇后的列号
//int check(int j){//检查皇后的位置是否合法
//    for(int i=1;i<j;++i){
//        if(q[i]==q[j]||abs(q[i]-q[j])==abs(i-j)){
//            return 0;
//        }
//    }
//    return 1;
//}
//void queen(int j) {
//    int answer = 0;
//    for (int i =1; i <=N; ++i) {
//        q[j] = i;
//        if (check(j)) {
//            if (j == N) {//找到了N皇后的一组解
//                answer += 1;
//                cout << "方案" << answer << endl;
//                for (int i = 1; i <= N; ++i) {
//                    cout << "(" << i << ',' << q[i] << ") ";
//                }
//                cout << endl;
//            }
//            else
//                queen(j+1);
//        }
//    }
//}
//int main(){
//
//    queen(1);
//    return 0;
//}