//
// Created by 左政 on 2024/4/7.
//
#include "/Users/zorro/CLionProjects/untitled/all.h"
class Bubble{
public:
    void my_sort(vector<int>&nums){
        int n=nums.size();
        for(int i=0;i<n-1;++i){
            for(int j=i;j<n-i-1;++j){
                if(nums[j]>nums[j+1]){
                    int temp=nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }

            }

        }

    }

};
