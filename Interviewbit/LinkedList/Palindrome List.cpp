/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* reverse(ListNode* head)
{
    ListNode* curr=head;
    ListNode* prev=NULL;

    while(curr)
    {
        ListNode* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    return prev;
}
int Solution::lPalin(ListNode* A) {

    ListNode *fast=A;
    ListNode *slow=A;

    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    ListNode* rev = reverse(slow->next);
    slow->next=NULL;

    ListNode* curr = A;
    while(rev)
    {
        if(curr->val!=rev->val)
            return false;

        curr=curr->next;
        rev=rev->next;
    }

    return true;
}
