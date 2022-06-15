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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int cry=0;
        ListNode *prev=new ListNode(), *sol=prev;
        while(l1 && l2){
            int sum=l1->val + l2->val + cry;
            cry=sum/10;
            prev->next=new ListNode(sum%10);
            prev=prev->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int sum=l1->val + cry;
            cry=sum/10;
            prev->next=new ListNode(sum%10);
            prev=prev->next;
            l1=l1->next;
        }
        while(l2){
            int sum=l2->val + cry;
            cry=sum/10;
            prev->next=new ListNode(sum%10);
            prev=prev->next;
            l2=l2->next;
        }
        if(cry){
            prev->next=new ListNode(cry);
        }
        return sol->next;
    }
};