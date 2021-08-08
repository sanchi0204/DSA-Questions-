/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool validateBST(TreeNode* root, long min, long max)
    {
        if(root == NULL)
            return true;


        return( root->val>min &&
               root->val<max &&
               validateBST(root->left,min,root->val) &&
               validateBST(root->right, root->val, max)
        );

    }
    bool isValidBST(TreeNode* root) {

        return validateBST(root, LONG_MIN, LONG_MAX);

    }
};
