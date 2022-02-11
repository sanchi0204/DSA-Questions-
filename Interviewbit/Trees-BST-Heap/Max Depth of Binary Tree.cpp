/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int Solution::maxDepth(TreeNode* root) {

    if(root==NULL)
        return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);


    return max(lh,rh)+1;

}
