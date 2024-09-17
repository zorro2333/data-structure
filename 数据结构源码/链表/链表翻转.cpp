//
// Created by 左政 on 2024/3/12.
//
#include "ListNode.h"
ListNode* list;
ListNode* reverseList(ListNode* head){
    ListNode *cur=head;ListNode *pre= nullptr;
    while(cur!= nullptr){
        ListNode* tmp=cur->next;//存储下个值
        cur->next=pre;//第一个指向前一个
        pre=cur;//前一个指向第一个
        cur=tmp;//继续下步交换
    }
    return pre;
};

