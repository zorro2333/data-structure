//
// Created by 左政 on 2024/3/12.
//
#include "TreeNode.h"
vector<int> inorder(TreeNode* root,vector<int> &res){
    if(!root) return {};
      inorder(root->left,res);
      res.emplace_back(root->val);
      inorder(root->right,res);
}