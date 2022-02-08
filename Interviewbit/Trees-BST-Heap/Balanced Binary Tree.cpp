/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int help(TreeNode* root)
{
    if(root==NULL)
        return 0;

    int lh = help(root->left);
    if(lh==-1)
        return -1;

    int rh = help(root->right);
        if(rh==-1)
            return -1;

    if(abs(lh-rh)>1)
        return -1;

    return max(lh,rh)+1;
}
int Solution::isBalanced(TreeNode* A) {

    if(help(A)==-1)
        return 0;

    return 1;

}
