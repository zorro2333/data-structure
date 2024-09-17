//
// Created by 左政 on 2024/3/21.
//
#include "iostream"
#include "vector"
using namespace std;
//给你一个整数数组 coins ，表示不同面额的硬币；以及一个整数 amount ，表示总金额。
//
//计算并返回可以凑成总金额所需的 最少的硬币个数 。如果没有任何一种硬币组合能组成总金额，返回 -1 。
//
//你可以认为每种硬币的数量是无限的。
// 输入：coins = [1, 2, 5], amount = 11
//输出：3
//解释：11 = 5 + 5 + 1
//*****
int coinChange(vector<int>& coins,int amount){
    vector<int> dp(amount+1,amount+1);//第一个是长度，第二个赋值方便最后判断是否返回-1;dp[i]指的是金额i的最少组成数量
    dp[0]=0;//显然总金额为零没有组合
    for(int i=1;i<=amount;++i){
        for(int j=0;j<coins.size();++j){
            if(i>=coins[j]) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    return dp[amount]>amount?-1:dp[amount];

}