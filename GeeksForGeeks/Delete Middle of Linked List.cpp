Node* deleteMid(Node* head)
{
    // Your Code Here
    Node* slow=head;
    Node* fast=head;
    Node* prev=slow;

    while(fast && fast->next)
    {
        fast=fast->next->next;
        prev=slow;
        slow=slow->next;
    }

    prev->next=slow->next;

    return head;

}
