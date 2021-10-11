countRangeNodes(Node* root, int l, int h , int& count)
{
    if(root==NULL)
        return;

    if(root->data>=l && root->data<=h)
        count++;

    countRangeNodes(root->left,l,h,count);
    countRangeNodes(root->right,l,h,count);
}
int getCount(Node *root, int l, int h)
{
  // your code goes here
  if(root==NULL)
    return 0;

    int count=0;
    countRangeNodes(root,l,h,count);

    return count;
}
