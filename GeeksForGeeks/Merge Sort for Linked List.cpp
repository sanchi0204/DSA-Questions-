class Solution{
  public:

  Node* merge(Node* l1, Node* l2)
  {
      Node* dummy = new Node(-1);
      Node* temp=dummy;

      while(l1 && l2)
      {
          if(l1->data<=l2->data)
          {
              temp->next=l1;
              temp=temp->next;
              l1=l1->next;
          }

          else
          {
              temp->next=l2;
              temp=temp->next;
              l2=l2->next;
          }
      }

      if(l1)
        temp->next=l1;

    else
        temp->next=l2;

    return dummy->next;
  }
    Node* mergeSort(Node* head) {
        // your code here

        if(head==NULL || head->next==NULL)
            return head;

        Node* slow=head;
        Node* fast=head;

        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        fast=slow->next;
        slow->next=NULL;

      return merge(mergeSort(head), mergeSort(fast));


    }
};
