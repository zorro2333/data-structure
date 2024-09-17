#include "algorithm"
#include <iostream>
#include "unordered_set"
using namespace std;
// Created by 左政 on 2023/11/9.

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

int a[15];
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> a;
        while(head!=nullptr){
            while(a.count(head)) return true;
            a.emplace(head);
            head=head->next;
        }
        return false;
    }
};
int main()
{
    int n=;
    cin>>n;
    int N=n;
    while(n--){
        int num;
        cin>>num;
        int l,r;
        r=num%10;
        while(num!=0){
            l=num%10;
            num/=10;
        }
        a[r]=max(a[l]+1,a[r]);
    }
    int result=0;
    for(int i=0;i<10;++i){
        result=max(result,a[i]);
    }
    return N-result;
}