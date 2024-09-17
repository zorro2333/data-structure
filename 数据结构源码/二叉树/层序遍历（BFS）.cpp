//
// Created by 左政 on 2024/3/13.
//
//使用队列，当队列不为空时，用tmp记录当前队列每个结点的值，弹出每个结点若该结点有左右孩子就加入队列，迭代该队列；
#include "TreeNode.h"
vector<vector<int> > levelOrder(TreeNode* root){
    vector< vector<int>> res;queue<TreeNode*> q;
    if(root) q.push(root);
    while(!q.empty()){
        vector<int> tmp;
        for(int i=q.size();i>0;--i) {//因为q.size（）在变化，所以不能用(i=0,i<q.size(),++i)
            TreeNode *p = q.front();
            q.pop();
            tmp.push_back(p->val);
            if(p->left) q.push(p->left);//迭代
            if(p->right) q.push(p->right);
        }
        res.push_back(tmp);
    }

}