/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {

    if(A==NULL)
        return {};

    vector<int> res;
    queue<TreeNode*> q;
    q.push(A);

    while(!q.empty())
    {
        int count=q.size();

        while(count--)
        {
            TreeNode* curr = q.front();
            q.pop();

        if(count==0)
            res.push_back(curr->val);

        if(curr->left)
            q.push(curr->left);

        if(curr->right)
            q.push(curr->right);



        }

    }

    return res;
}
