/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> res;

    queue<TreeNode*> q;
    q.push(A);

    while(!q.empty())
    {
        vector<int> ds;
        int count=q.size();

        for(int i=0;i<count;i++)
        {
        TreeNode* curr = q.front();
        q.pop();

        ds.push_back(curr->val);

        if(curr->left)
            q.push(curr->left);

        if(curr->right)
            q.push(curr->right);
        }

        res.push_back(ds);
    }


    return res;

}
