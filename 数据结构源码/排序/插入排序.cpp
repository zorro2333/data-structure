//
// Created by 左政 on 2024/4/7.
//
#include "/Users/zorro/CLionProjects/untitled/all.h"
class insert{
public:void my_sort(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n;++i){
        int pos=i-1;
        int cur=nums[i];
        while(pos>=0&&cur<nums[pos]){
            nums[pos+1]=nums[pos];
            pos--;
        }
        nums[pos+1]=cur;

    }
}

};