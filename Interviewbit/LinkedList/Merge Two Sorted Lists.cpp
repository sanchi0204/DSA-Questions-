/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {

    if(A==NULL)
        return B;

    if(B==NULL)
        return A;

ListNode* head = new ListNode(-1);
ListNode* tail = head;

while(A!=NULL && B!=NULL)
{
    if(A->val<B->val)
    {
        tail->next=A;
        tail=tail->next;
        A=A->next;
    }

    else
    {
        tail->next=B;
        tail=tail->next;
        B=B->next;
    }
}

if(A)
    tail->next=A;

else
    tail->next=B;

return head->next;
}
