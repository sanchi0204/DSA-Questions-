class Solution
{
    public:

    struct Node* reverse(struct Node* head)
    {
        Node* curr=head;
        Node* prev=NULL;

        while(curr)
        {
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
            int carry=0;
            struct Node* dummy=new Node(-1);
            struct Node* temp=dummy;

            first=reverse(first);

            second=reverse(second);

            while(first!=NULL || second!=NULL || carry!=0)
            {
                 int sum=0;

                if(first!=NULL)
                {
                    sum+=first->data;
                    first=first->next;
                }

                if(second!=NULL)
                {
                    sum+=second->data;
                    second=second->next;
                }

                sum+=carry;
                carry=sum/10;

                Node* node=new Node(sum%10);
                temp->next=node;
                temp=temp->next;

            }

            return reverse(dummy->next);
    }
};
