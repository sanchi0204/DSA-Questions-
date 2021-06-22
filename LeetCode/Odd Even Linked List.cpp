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
    ListNode* oddEvenList(ListNode* head) {

        ListNode *os=NULL, *oe=NULL, *es=NULL,*ee=NULL, *curr=head;
        int i=1;

        while(curr!=NULL)
        {

            if(i%2==0)
            {
                if(es==NULL)
                {
                    es=curr;
                    ee=es;
                }

                else
                {
                    ee->next=curr;
                    ee=ee->next;
                }
            }

            else
            {
                if(os==NULL)
                {
                    os=curr;
                    oe=os;
                }

                else
                {
                    oe->next=curr;
                    oe=oe->next;
                }
            }

            curr=curr->next;
            i++;
        }


        if(os==NULL || es==NULL)
            return head;

        oe->next=es;
        ee->next=NULL;


        return os;

    }
};
