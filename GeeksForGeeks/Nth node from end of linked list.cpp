int getNthFromLast(Node *head, int n)
{
   Node *fast=head, *slow=head;

    for(int i=0;i<n;i++)
    {
        if(fast==NULL)
            return -1;

          fast=fast->next;
    }


    while(slow && fast)
    {
        slow=slow->next;
        fast=fast->next;
    }

    return slow->data;


}
