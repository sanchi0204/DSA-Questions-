/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool help(TreeNode* root, int x, vector<int>& res)
{
    if(root==NULL)
        return false;

    res.push_back(root->val);

    if(root->val==x)
        return true;

    if(help(root->left,x,res) || help(root->right, x, res))
        return true;

    res.pop_back();
    return false;
}
vector<int> Solution::solve(TreeNode* A, int B) {

    if(A==NULL)
        return {};

    vector<int> res;

    help(A,B,res);
    return res;

}
