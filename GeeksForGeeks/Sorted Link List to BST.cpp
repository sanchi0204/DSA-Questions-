class Solution{
  public:

    LNode* findmid(LNode* head)
    {
        LNode* slow=head;
        LNode* fast=head;
        LNode* prev=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }

        if(prev!=NULL)
            prev->next=NULL;

        return slow;
    }
    TNode* sortedListToBST(LNode *head) {
        //code here

        if(head==NULL)
            return NULL;


        LNode* mid=findmid(head);
        TNode* root=new TNode(mid->data);

          if(head==mid)
            return root;

        root->left= sortedListToBST(head);
        root->right=sortedListToBST(mid->next);

        return root;
    }
};
