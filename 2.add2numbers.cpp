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
        int c=0;
        ListNode*ans=new ListNode(-1);
        ListNode*a=ans;

        while (l1!=nullptr && l2!=nullptr){
            int d=l1->val+l2->val+c;
            int val=d%10;
            c=d/10;

            a->next=new ListNode(val);


            a=a->next;

            l1=l1->next;
            l2=l2->next;

        }
        while (l1!=nullptr){

            int d=l1->val+c;
            int val=d%10;
            c=d/10;
            a->next=new ListNode(val);
            a=a->next;
            l1=l1->next;
            
        }
        while (l2!=nullptr){

            int d=l2->val+c;
            int val=d%10;
            c=d/10;
            a->next=new ListNode(val);
            a=a->next;
            l2=l2->next;
        }
        while (c!=0){
            int d=c;
            int val=d%10;
            c=d/10;
            a->next=new ListNode(val);
            a=a->next;

        }
        return ans->next;
        
    }
};
