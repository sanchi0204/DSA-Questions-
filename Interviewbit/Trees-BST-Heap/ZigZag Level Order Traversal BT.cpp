/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {

    if(A==NULL)
        return {{}};

    vector<vector<int>> res;
    stack<TreeNode*> s1,s2;
    s1.push(A);

    while(!s1.empty() || !s2.empty())
    {
        vector<int> ds1;
        while(s1.empty()==false)
        {
                TreeNode* curr = s1.top();
                s1.pop();
                ds1.push_back(curr->val);

                if(curr->left)
                    s2.push(curr->left);

                if(curr->right)
                    s2.push(curr->right);
        }

        if(ds1.size()>0)
        res.push_back(ds1);

        vector<int> ds2;
        while(s2.empty()==false)
        {
            TreeNode* curr = s2.top();
            s2.pop();

            ds2.push_back(curr->val);

            if(curr->right)
                s1.push(curr->right);

            if(curr->left)
                s1.push(curr->left);

        }

        if(ds2.size()>0)
        res.push_back(ds2);
    }

    return res;

}
