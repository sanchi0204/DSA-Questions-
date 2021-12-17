Node *RemoveHalfNodes(Node *root)
{
   //add code here.
   if(root==NULL)
    return NULL;

   root->left = RemoveHalfNodes(root->left);

   root->right = RemoveHalfNodes(root->right);

   //when either of child is null
   if(root->left==NULL && root->right!=NULL)
        return root->right;

    if(root->left!=NULL && root->right==NULL)
        return root->left;

    return root; //when both null
}
