class Solution
{
    public:
    //Function to convert binary tree to doubly linked list and return it.
    Node *prev=NULL;

    void BTreeToDLL(Node* root, Node **head) //double pointer as pointer passed by reference
    {

      if(root==NULL)
            return;

        BTreeToDLL(root->left,head);

        if(prev==NULL)
        {
            *head=root; //head defined once
        }

        else
        {
            root->left=prev;
            prev->right=root;
        }

        prev=root;

       BTreeToDLL(root->right,head);

    }
    Node * bToDLL(Node *root)
    {
        // your code here

        Node* head=NULL;

        BTreeToDLL(root, &head);

       return head;
    }
};
