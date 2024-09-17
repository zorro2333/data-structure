//
// Created by 左政 on 2024/3/2.
//

#ifndef UNTITLED_ALL_H
#define UNTITLED_ALL_H

#endif //UNTITLED_ALL_H
#include "iostream"
#include "cmath"
#include "vector"
#include "algorithm"
#include "stack"
#include "queue"
#include "unordered_map"
#include "list"
#include "map"
#include "set"
#include "stdio.h"
#include "stdlib.h"
#include "unordered_set"

using namespace std;
void reverseArray(int *a,int count);
void prinfArray(int *a,int count);
class solution{
public: static int lengthOfLongestSubstring(string s){
        if(s.size()==0) return 0;
        unordered_set<char> lookup;
        int left=0;int ans=0;
        for(int i=0;i<s.size();++i){
            while(lookup.find(s[i])!=lookup.end()){
                lookup.erase(s[left]);
                ++left;
            }
            ans=max(ans,i-left+1);
            lookup.emplace(s[i]);
        }return ans;

    }
};