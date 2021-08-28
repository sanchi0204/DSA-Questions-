class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here

        if(head==NULL)
        return false;

        Node *slow=head, *fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)
                return true;
        }

        return false;

    }
};
