//
// Created by 左政 on 2024/3/4.
//
#include "iostream"

using namespace std;
typedef char TA[5];//定义数组类型
typedef char *TB[5];//定义指针数组类型,PA定义的变量为含5个char*指针元素的数组(指针数组类型)
typedef char *(TC[5]);//指针数组类型，因为[]的结合优先级最高，所以加不加()没啥区别，TC等价于TB
typedef char (*TD)[5];//数组指针类型
//1、定义函数指针变量

int (*pFunc)(char *frame, int len);

//定义了一个函数指针变量pFunc，它可以指向这样的函数：返回值为int，形参为char*、int

 int *(*pFunc1[5])(int len);

//定义了5个函数指针变量：pFunc1[0]、pFunc1[1]···，它们都可以指向这样的函数：返回值为int*，形参为int

//2、定义函数指针类型

        //定义函数指针类型，必须使用typedef，方法就是，在“定义函数指针变量”加上typedef。

typedef  int (*pFunc_t)(char *frame, int len);//定义了一个类型pFunc_t
//三、定义数组指针类型
int(*pArr)[5];//pArr是一个指向含5个int元素的一维数组的指针变量
int a[5] = {1,2,3,4,5};
int b[6] = {1,2,3,4,5,6};
//pArr = &a;//完全合法，无警告
//pArr = a;//发生编译警告，赋值时类型不匹配：a的类型为int(*)，而pArr的类型为int(*)[5]
//pArr = &a[0];//发生编译警告，赋值时类型不匹配：a的类型为int(*)，而pArr的类型为int(*)[5]
//pArr = &b;//发生编译警告，赋值时类型不匹配：&b的类型为int(*)[6]，而pArr的类型为int(*)[5]
//pArr = (int(*)[5])&b;//类型强制转换为int(*)[5]，完全合法，无警告
