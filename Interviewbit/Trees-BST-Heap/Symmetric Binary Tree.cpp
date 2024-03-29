/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int help(TreeNode* A, TreeNode* B)
{
    if(A==NULL && B==NULL)
        return 1;

    if(A==NULL || B==NULL)
        return 0;

    if(A->val!=B->val)
        return 0;

    return help(A->left, B->right) && help(A->right, B->left);
}
int Solution::isSymmetric(TreeNode* A) {

    if(A==NULL)
        return 1;

    return help(A->left, A->right);
}
