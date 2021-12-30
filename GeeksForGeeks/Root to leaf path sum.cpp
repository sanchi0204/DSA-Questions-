class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {

        if(root==NULL)
            return false;

        S=S-root->data;

        if(root->left==NULL && root->right==NULL && S==0)
            return true;

        return (hasPathSum(root->left,S) || hasPathSum(root->right,S));
    // Your code here
}
};
