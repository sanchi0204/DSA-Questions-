class Solution {
public:

int help(Node* root, int& res)
{
    if(root==NULL)
        return 0;

    if(root->left==NULL && root->right==NULL)
        return root->data;

    // int lh = max(0,help(root->left,res));
    // int rh = max(0, help(root->right,res));

    int lh = help(root->left, res);

    int rh = help(root->right, res);

        if(root->left!=NULL && root->right!=NULL)
        {
    res = max(res, lh+rh+root->data);

    return (max(lh,rh)+root->data);

        }

    return (root->left==NULL)? rh+root->data : lh+root->data;

}

    int maxPathSum(Node* root)
    {
        // code here
        int res = INT_MIN;

        int val = help(root, res);

       return (res==INT_MIN ? val:res);

    }
