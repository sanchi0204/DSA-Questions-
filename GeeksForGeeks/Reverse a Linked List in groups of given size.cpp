class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    {
        // Complete this method
        struct node* prevFirst=NULL;
        struct node* curr=head;
        struct node* first=NULL;
        int count=0;
        bool isFirst=true;

        struct node *prev, *next;

        while(curr)
        {
            first=curr;
            prev=NULL;
            next=NULL;
            count=0;

            while(curr && count<k)
            {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
            }

            if(isFirst)
            {
                head=prev;
                isFirst=false;
            }

            else
                prevFirst->next=prev;

            prevFirst=first;
        }

        return head;
    }
};
