/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void help(TreeNode* root, int x, vector<vector<int>>& res, vector<int>& v)
{
        if(root==NULL)
            return;

        v.push_back(root->val);

        if(root->left==NULL && root->right==NULL && x==root->val)
        {
            res.push_back(v);
            v.pop_back();
            return;
        }

        help(root->left,x-root->val,res,v);
        help(root->right, x-root->val, res,v);

        v.pop_back();
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {

    vector<vector<int>> res;
    vector<int> v;

    help(A,B,res,v);

    return res;
}
