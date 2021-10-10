int countNodes(struct Node* head)
{

    int count=1;
    struct Node* temp=head;
    while(temp->next!=head)
    {
        count++;
        temp=temp->next;
    }

    return count;
}
int countNodesinLoop(struct Node *head)
{
     struct Node* slow=head;
    struct Node* fast=head;

    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
            return countNodes(slow);
    }

 return 0;
}
