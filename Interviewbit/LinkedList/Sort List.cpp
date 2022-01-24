/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* merge(ListNode* l1, ListNode* l2)
{
    if(l1==NULL)
        return l2;

    if(l2==NULL)
        return l1;

    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;

    while(l1 && l2)
    {
        if(l1->val<=l2->val)
        {
                temp->next=l1;
                temp=temp->next;
                l1=l1->next;
        }

        else
        {
            temp->next=l2;
            temp=temp->next;
            l2=l2->next;
        }
    }

    if(l1)
        temp->next=l1;

    if(l2)
        temp->next=l2;

    return dummy->next;
}
ListNode* Solution::sortList(ListNode* A) {

    if(A==NULL || A->next==NULL)
        return A;

    ListNode* slow=A;
    ListNode* fast=A;

    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    fast=slow->next;
    slow->next=NULL;

    return merge(sortList(A), sortList(fast));
}
