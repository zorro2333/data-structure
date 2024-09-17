//
// Created by 左政 on 2024/3/19.
//
#include "iostream"
using namespace std;

//unique_ptr 对其持有的堆内存具有唯一拥有权
    unique_ptr<int> sp1(new int(123));//初始化一个sp1对象
   // unique_ptr<int> sp2;
    //sp2.reset(new int(123));
    unique_ptr<int> sp3=make_unique<int>(123);//***这个方式更好
//智能指针禁止拷贝和引用构造
//只能移动构造
#include <memory>
int main()
{
    std::unique_ptr<int> sp1(std::make_unique<int>(123));
    std::unique_ptr<int> sp2(std::move(sp1));
    std::unique_ptr<int> sp3;
    sp3 = std::move(sp2);
    return 0;
}