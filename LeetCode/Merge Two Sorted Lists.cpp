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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(l1==NULL)
            return l2;

       if(l2==NULL)
            return l1;

        ListNode *temp = new ListNode();
        ListNode *res = temp;

        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
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

        if(l2==NULL)
        {
            temp->next=l1;
            temp = temp->next;
        }

        else
        {
            temp->next=l2;
            temp=temp->next;
        }


        return res->next;
    }
};
