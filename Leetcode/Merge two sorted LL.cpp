/*
Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

Example 1:
Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: l1 = [], l2 = []
Output: []

Example 3:
Input: l1 = [], l2 = [0]
Output: [0]

---------------------------------------------------------SOLUTION-----------------------------------------------------*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* last=NULL, *t=NULL;
        if(l1==NULL && l2==NULL)
            return last;
        else if(l1==NULL && l2!=NULL)
            return l2;
        else if(l1!=NULL && l2==NULL)
            return l1;
        
        
        if(l1->val>l2->val){
            t=l2;
            last=l2;
            l2=l2->next;
            last->next=NULL;
        }
        else{
            t=l1;
            last=l1;
            l1=l1->next;
            last->next=NULL;
        }
        while(l1 && l2){
            if(l1->val>l2->val){
                last->next=l2;
                last=l2;
                l2=l2->next;
                last->next=NULL;
            }
            else{
                last->next=l1;
                last=l1;
                l1=l1->next;
                last->next=NULL;
            }
        }
        if(l1!=NULL)
            last->next=l1;
        else
            last->next=l2;
        
        return t;
    }
};
