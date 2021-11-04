Node* sortedMerge(Node* head1, Node* head2)
{
    // code here
    Node* head=NULL;
    Node* tail=NULL;

    if(head1->data<=head2->data)
        {
            head=head1;
            head1=head1->next;
            tail=head;
        }

    else
    {
        head=head2;
        head2=head2->next;
        tail=head;
    }

    while(head1 && head2)
    {
        if(head1->data<=head2->data)
        {
            tail->next=head1;
            tail=tail->next;
            head1=head1->next;
        }

        else
        {
            tail->next=head2;
            tail=tail->next;
            head2=head2->next;
        }
    }

    if(head1)
        tail->next=head1;

    else
        tail->next=head2;


    return head;


} 
