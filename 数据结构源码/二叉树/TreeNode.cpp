//
// Created by 左政 on 2024/3/12.
//

#include "TreeNode.h"
int maxDepth(TreeNode* root){
    if(!root) return 0;
    return max(maxDepth(root->left), maxDepth((root->right)));
};

TreeNode* invertTree(TreeNode* root){
    if(!root) return nullptr;
    TreeNode* tmp=root->left;
    root->left=root->right;
    root->right=tmp;
    invertTree(root->left);
    invertTree((root->right));
    return root;
};

bool check(TreeNode* p,TreeNode* q){
    if(!p&&!q) return true;
    if(!p||!q) return false;
    return p->val==q->val&&check(p->left,q->right)&&check(p->right,q->left);
}
bool isSymmetric(TreeNode* root) {
    return check(root->left,root->right);
}