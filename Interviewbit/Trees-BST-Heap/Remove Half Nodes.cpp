/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* root) {

    if(root==NULL)
        return NULL;

    root->left = solve(root->left);

    root->right = solve(root->right);

    if(root->left==NULL && root->right!=NULL)
        return root->right;

    else if(root->left!=NULL && root->right==NULL)
        return root->left;

    return root;

}
