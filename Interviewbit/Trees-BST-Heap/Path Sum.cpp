/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool help(TreeNode* root, int x)
{
    if(root==NULL)
        return false;

    x=x-root->val;

    if(root->left==NULL && root->right==NULL && x==0)
        return true;

    return (help(root->left,x) || help(root->right,x));
}
int Solution::hasPathSum(TreeNode* A, int B) {

    if(A==NULL)
        return 0;

        return help(A,B);
}
