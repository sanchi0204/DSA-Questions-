bool search(Node* root, int x) {
    // Your code here

    while(root!=NULL)
    {
        if(root->data==x)
            return true;

       else if(root->data>x)
            root=root->left;

       else
        root=root->right;
    }

    return false;
}
