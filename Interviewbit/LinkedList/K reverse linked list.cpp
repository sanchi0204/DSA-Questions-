/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {

    ListNode *firstPrev=NULL, *prev, *curr=A, *first=NULL, *next;
    int count;
    bool isFirst=true;

    while(curr)
    {
            count=0;
            prev=NULL;
            first=curr;
            next=NULL;

        while(curr && count<B)
        {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
        }

        if(isFirst)
        {
            A=prev;
            isFirst=false;
        }

        else
            firstPrev->next=prev;

        firstPrev=first;
    }

    return A;
}
