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

    queue<TreeNode*> q;
    q.push(A);
    stack<int> s;

    while(q.empty()==false)
    {
            TreeNode* curr = q.front();
            q.pop();

            s.push(curr->val);

            if(curr->right)
                q.push(curr->right);

            if(curr->left)
                q.push(curr->left);
    }

    vector<int> res;
    while(s.empty()==false)
        {
            res.push_back(s.top());
            s.pop();
        }

        return res;

}
