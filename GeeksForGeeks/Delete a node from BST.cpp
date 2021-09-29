// Function to delete a node from BST.
int getSuccVal(Node* root)
{
    while(root->left)
        root=root->left;

    return root->data;
}
Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(root==NULL)
        return root;

    else if(root->data < X)
        root->right = deleteNode(root->right,X);

    else if(root->data > X)
        root->left = deleteNode(root->left,X);

    else
    {
        if(root->left==NULL)
            return root->right;

        else if(root->right==NULL)
            return root->left;

        else
        {
            root->data = getSuccVal(root->right);
            root->right = deleteNode(root->right, root->data);
        }

    }

    return root;
}
