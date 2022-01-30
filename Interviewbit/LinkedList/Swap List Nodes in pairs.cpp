/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {

    if(A==NULL || A->next==NULL)
        return A;

    ListNode* prev=A;
    ListNode* curr= A->next->next;
    A=A->next;
    A->next=prev;

    while(curr && curr->next)
    {
        prev->next=curr->next;
        prev=curr;
        ListNode* next = curr->next->next;
        curr->next->next=curr;
        curr=next;
    }

    prev->next=curr;
    return A;
}
