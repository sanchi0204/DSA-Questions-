void find(Node* root, long long& ans, long long res)
{
    if(root==NULL)
        return;

    res*=10;
    res+=root->data;

    if(root->left==NULL && root->right==NULL)
    {
        ans+=res;
        return;
    }

    find(root->left,ans,res);
    find(root->right,ans,res);

}
long long treePathsSum(Node *root)
{
    //Your code here

    if(root==NULL)
        return 0;

    long long ans=0;
    long long res=0;

    find(root,ans,res);

    return ans;
}
