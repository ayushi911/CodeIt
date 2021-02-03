// 141. Linked List Cycle
// Ques link: https://leetcode.com/problems/linked-list-cycle/
//--------------------------------------SOLUTION-------------------------------------------
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
            return false;
        ListNode *p,*q;
        p=q=head;
        do{
            p=p->next;
            q=q->next;
            q = (q!=NULL)? q->next : NULL;
        }while(p && q && p!=q);
        
        return (p==q);
    }
};
