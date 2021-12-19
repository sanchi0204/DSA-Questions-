Node* findMid(Node* head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

Node* reverse(Node* head)
{
    Node* curr = head;
    Node* prev=NULL;

    while(curr)
    {
        Node* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    return prev;
}
void reorderList(Node* head) {
    // Your code here

    Node* mid = findMid(head);

    Node* rev = reverse(mid->next);

    mid->next=NULL;

    Node* curr=head;

    while(curr && rev)
    {
        Node* first=curr->next;
        Node* second = rev->next;
        curr->next=rev;
        rev->next=first;
        rev=second;
        curr=first;
    }

}
