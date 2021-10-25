Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while(head1 && head2)
    {
        if(head1->data<head2->data)
            head1=head1->next;

        else if(head2->data<head1->data)
            head2=head2->next;

        else
            {
                temp->next = new Node(head1->data);
                temp=temp->next;
                head1=head1->next;
                head2=head2->next;
            }

    }

    return dummy->next;
}
