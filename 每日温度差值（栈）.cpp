//
// Created by 左政 on 2024/3/23.
//
//给定一个整数数组 temperatures ，表示每天的温度，返回一个数组 answer ，其中 answer[i] 是指对于第 i 天，
// 下一个更高温度出现在几天后。如果气温在这之后都不会升高，请在该位置用 0 来代替。
//示例 1:
//输入: temperatures = [73,74,75,71,69,72,76,73]
//输出: [1,1,4,2,1,1,0,0]
#include "all.h"
using namespace std;
vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n=temperatures.size();
    vector<int>ans(n);
    stack<int> stk;
    for(int i=0;i<n;++i){
      while(!stk.empty()&&temperatures[i]> temperatures[stk.top()]){
          int previousIndex=stk.top();
          ans[previousIndex]=i-previousIndex;
          stk.pop();
      }
stk.push(i);
    }
    return ans;
}
//可以维护一个存储下标的单调栈，从栈底到栈顶的下标对应的温度列表中的温度依次递减。
// 如果一个下标在单调栈里，则表示尚未找到下一次温度更高的下标。
//正向遍历温度列表。对于温度列表中的每个元素 temperatures[i]，如果栈为空，则直接将 i 进栈，
// 如果栈不为空，则比较栈顶元素 prevIndex 对应的温度 temperatures[prevIndex] 和
// 当前温度 temperatures[i]，如果 temperatures[i] > temperatures[prevIndex]，
// 则将 prevIndex 移除，并将 prevIndex 对应的等待天数赋为 i - prevIndex，
// 重复上述操作直到栈为空或者栈顶元素对应的温度小于等于当前温度，然后将 i 进栈。
//
