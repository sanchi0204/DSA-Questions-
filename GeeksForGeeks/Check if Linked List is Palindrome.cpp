class Solution{
  public:

  Node* Reverse(Node *head)
  {
      Node *prev=NULL, *curr=head;
      while(curr)
      {
          Node *next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
      }

      return prev;
  }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *slow=head, *fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        Node *rev= Reverse(slow->next);

        Node *curr=head;

        while(curr && rev)
        {
            if(curr->data!=rev->data)
                return false;

            curr=curr->next;
            rev=rev->next;
        }

        return true;
    }
};
