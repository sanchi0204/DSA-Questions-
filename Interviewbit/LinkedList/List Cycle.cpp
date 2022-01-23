/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


        if(A==NULL || A->next==NULL)
            return NULL;

    ListNode* fast=A;
    ListNode* slow = A;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
            {
              break;
            }
    }
        if(slow!=fast)
            return NULL;

     slow=A;
     while(slow!=fast)
     {
         slow=slow->next;
         fast=fast->next;
     }

    return slow;
}
