//
// Created by 左政 on 2024/3/12.
//

#ifndef UNTITLED_LISTNODE_H
#define UNTITLED_LISTNODE_H


class ListNode {
public: int val;
     ListNode* next;
     ListNode() :val(0),next(nullptr){};
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* reverseList(ListNode* head);
ListNode* mergeTwoLists(ListNode* a,ListNode* b);
#endif //UNTITLED_LISTNODE_H
