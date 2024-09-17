//
// Created by 左政 on 2024/3/2.
#include "iostream";
using namespace std;
class Solution{
public:
    int reversed(int x) {
        string a = to_string(x);//变成字符串
        reverse(a.begin(), a.end());//翻转字符串
        int ans = 0;
        try {
            ans = stoi(a);
           if (x < 0);
            ans = -ans;
        } catch (exception ex) {};
        return ans;
    }};