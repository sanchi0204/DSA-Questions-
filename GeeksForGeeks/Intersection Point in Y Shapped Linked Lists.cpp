int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here

    if(head1==NULL || head2==NULL)
        return -1;

    Node *a=head1, *b=head2;

    while(a!=b)
    {
        a=a==NULL?a=head2:a->next;
        b=b==NULL?b=head1:b->next;
    }

return a->data;
}
