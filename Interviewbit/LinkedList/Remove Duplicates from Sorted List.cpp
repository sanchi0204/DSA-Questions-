/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {

if(A==NULL)
    return NULL;

    ListNode* curr = A;

    while(curr && curr->next)
    {
          ListNode* currNext = curr->next;

        if(curr->val == currNext->val)
            curr->next=currNext->next;
        else
        curr=curr->next;
    }

    return A;
}
