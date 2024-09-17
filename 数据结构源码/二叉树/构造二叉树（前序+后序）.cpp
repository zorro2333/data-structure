//
// Created by 左政 on 2024/3/15.
//
//两个序列分别代表前序和后序
#include "TreeNode.h"
#include "unordered_map"
vector<int>preorder,inorder;
TreeNode* recur(int root,int left,int right);
unordered_map<int,int> dic;//使用哈希表保中序遍历的映射
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    for(int i=0;i<inorder.size();++i){
        dic[inorder[i]]=i;}
    return recur(0,0,preorder.size()-1);
}
 TreeNode* recur(int root,int left,int right){
    if(left>right) return nullptr;
    TreeNode* node=new TreeNode(preorder[root]);
    int i=dic[preorder[root]];//在中序遍历该跟结点的位置
    node->left=recur(root+1,left,i-1);//左结点为前序遍历中根结点+！，
    // 区域为left到中序遍历该结点位置减一
    node->right=recur(i-left+root+1,i+1,right);//根节点索引 + 左子树长度 + 1
}