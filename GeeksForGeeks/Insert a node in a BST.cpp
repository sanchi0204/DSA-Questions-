// Function to insert a node in a BST.
Node* insert(Node* root, int Key) {
    // Your code here

    Node* temp = new Node(Key);

    if(root==NULL)
        return temp;

    Node* parent=NULL;
    Node* curr=root;

    while(curr!=NULL)
    {
        parent = curr;

        if(curr->data<Key)
            curr=curr->right;

        else if(curr->data>Key)
            curr=curr->left;

        else
            return root;
    }

    if(parent==NULL)
        return NULL;

    if(parent->data<Key)
        parent->right=temp;

    else
        parent->left=temp;

        return root;

}
