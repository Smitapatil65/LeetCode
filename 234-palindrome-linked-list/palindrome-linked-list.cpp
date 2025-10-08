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
    bool isPalindrome(ListNode* head) {
        ListNode* s=head,*f=head;

        while(f and f->next)
        {
            s=s->next;
            f=f->next->next;
        }
        if(f!=NULL && f->next==NULL)
        {
            s=s->next;
        }

        ListNode* pre=NULL;
        while(s && s->next)
        {
            ListNode* tmp=s->next;
            s->next=pre;
            pre=s;
            s=tmp;
        }
        if(s!=NULL){s->next=pre;}
        f=head;

        while(s && f )
        {
            if(s->val!=f->val)
             return false;
             s=s->next;
             f=f->next;
        }
      return true;

    }
};