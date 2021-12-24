struct Node* reverseList(struct Node *head)
    {
        struct Node *prev=NULL, *curr=head;

        while(curr)
        {
            struct Node* next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        return prev;
    }
