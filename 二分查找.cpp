//
// Created by 左政 on 2024/3/18.
#include "iostream"
#include "vector"
//#include "algorithm"
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
// 如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
int searchInsert(std::vector<int>& nums,int target){
    int len=nums.size();
    int left=0;int right=len-1;int ans=len;
    while(left<=right){
        int mid=((right-left)>>1)+left;
        if(target<=nums[mid]){
            right=mid-1;
        }else left=mid+1;
    }
    return ans;

}