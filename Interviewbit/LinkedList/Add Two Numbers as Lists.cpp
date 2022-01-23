/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {

    int carry=0;
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;

    while(A || B || carry!=0)
    {
        int sum=0;

        if(A)
        {
            sum+=A->val;
            A=A->next;
        }

        if(B)
        {
            sum+=B->val;
            B=B->next;
        }

        sum+=carry;
        carry=sum/10;
        ListNode* node = new ListNode(sum%10);
        temp->next=node;
        temp=temp->next;
    }

    return dummy->next;
}
