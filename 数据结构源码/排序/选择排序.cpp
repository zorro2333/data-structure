//
// Created by 左政 on 2024/4/7.
//
#include "/Users/zorro/CLionProjects/untitled/all.h"
class Select{
public:void my_sort(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n;++i){
        int minPos=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[minPos]){
                minPos=j;
            }
        }
        int temp=nums[i];
        nums[i]=nums[minPos];
        nums[minPos]=temp;
    }
}

};