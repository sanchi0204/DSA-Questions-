class Solution
{
    public:
    Node *copyList(Node *head)
    {
        //Write your code here
        Node* iter=head;
        Node* front = head;

        while(iter)
        {
            front=iter->next;

            Node* copy = new Node(iter->data);
            iter->next=copy;
            copy->next=front;

            iter=front;

        }

        iter=head;

        while(iter)
        {
            if(iter->arb!=NULL)
                iter->next->arb=iter->arb->next;

            iter=iter->next->next;
        }

        Node* dummy = new Node(-1);
        Node* copy = dummy;
        iter=head;

        while(iter!=NULL)
        {
            front=iter->next->next;

            copy->next=iter->next;
            copy=copy->next;

            iter->next=front;
            iter=iter->next;
        }

        return dummy->next;
    }

};
