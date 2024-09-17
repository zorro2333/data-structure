//
// Created by 左政 on 2024/3/12.
//

#ifndef UNTITLED_TREENODE_H
#define UNTITLED_TREENODE_H
#include "vector"
#include "iostream"
#include "algorithm"
#include "queue"
using namespace std;

class TreeNode {
public: int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode():val(0),left(nullptr),right(nullptr){};
        TreeNode(int x):val(x),left(nullptr),right(nullptr){};
        TreeNode(int x,TreeNode* left,TreeNode* right):val(x),left(left),right(right){};
         static vector<int> inorder(TreeNode* root,vector<int> &res);
};
//求二叉树最大高度，即左子树与右子树的最大高度加1，递归
int maxDepth(TreeNode* root);
//将二叉树结点下翻转，递归交换每个节点下的子树
TreeNode* invertTree(TreeNode* root);
bool isSymmetric(TreeNode* root);//判断是否为对称二叉树
#endif //UNTITLED_TREENODE_H
