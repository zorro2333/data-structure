//
// Created by 左政 on 2024/3/16.
//
#include "TreeNode.h"
int rootSum(TreeNode* root,int targetSum){//求该结点往下满足条件的数目
    if(!root) return 0;
    int ret=0;
    if(root->val==targetSum) ret++;
    ret+=rootSum(root->left,targetSum-root->val);
    ret+=rootSum(root->right,targetSum-root->val);
    return ret;
}
int pathSum(TreeNode* root,int targetSum){//从根结点开始遍历所有路径
       if(!root) return 0;
       int ret=rootSum(root,targetSum);
       ret+= pathSum(root->left,targetSum);
       ret+= pathSum(root->right,targetSum);
       return ret;
}
