/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int help(TreeNode* A, int B, unordered_set<int>& s)
{
    if(A==NULL)
        return 0;

    if(help(A->left,B,s))
        return 1;

    if(s.find(B-A->val)!=s.end())
        return 1;

    else
        s.insert(A->val);

    return help(A->right,B,s);
}

int Solution::t2Sum(TreeNode* A, int B) {

    unordered_set<int> s;

    return help(A,B,s);
}
