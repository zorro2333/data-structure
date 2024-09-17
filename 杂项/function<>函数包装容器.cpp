//
// Created by 左政 on 2024/3/27.
#include "functional"
#include "stdio.h"
using namespace std;
#include <iostream>

function<void ()> func;
//function<void tmp()> func;	//错误，无需函数名
//function<void > func;			//错误，无参数列表
//function<(int)> func;			//错误，无返回类型
int square(int val)
{
    return val * val;
}
typedef int (* FnSquare)(int);//定义FnSquare为一个函数指针类型
class FuncTmp
{
public:
    void operator()()
    {
        cout << "Tmp \n";
    }
};

int main()
{
    int a = 5;
    function<int (int)> func1 = square;	//包装普通函数

    FnSquare fnSquare = square;
    function<int (int)> func2 = fnSquare;	//包装函数指针

    function<void ()> func3 = FuncTmp();	//包装仿函数(函数对象)

    function<void (int)> func4 = [](int a){	//包装Lambda表达式
        cout << "a: " << a << endl;
    };

    cout << func1(a) << endl;
    cout << func2(2) << endl;
    func3();

    func4(10);

    return 0;
}
