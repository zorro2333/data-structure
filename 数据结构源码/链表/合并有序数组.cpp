//
// Created by 左政 on 2024/3/12.
//
//合并两个有序数组；
#include "ListNode.h"
ListNode* mergrTwoLists(ListNode*a,ListNode* b){
    if(a||b) return a?a:b;
    ListNode head,*tail=&head,*aptr=a,*bptr=b;
    while(aptr&&bptr){
        if(aptr->val<bptr->val){
            tail->next=aptr;aptr=aptr->next;
        }else {
            tail->next=bptr;bptr=bptr->next;
        }
        tail=tail->next;
    }
    return head.next;
}