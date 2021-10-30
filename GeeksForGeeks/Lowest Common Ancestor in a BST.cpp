Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(root==NULL)
    return NULL;

    if(root->data==n1 || root->data==n2)
        return root;

    Node *lca1= LCA(root->left,n1,n2);

    Node *lca2 = LCA(root->right,n1,n2);

    if(lca1 && lca2)
        return root;

    if(lca1==NULL)
        return lca2;

    else
        return lca1;
}
