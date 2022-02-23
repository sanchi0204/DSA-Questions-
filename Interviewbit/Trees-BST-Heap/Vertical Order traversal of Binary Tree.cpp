/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {

    if(A==NULL)
        return {};

    vector<vector<int>> res;
    queue<pair<TreeNode*,int>> q;
    q.push({A,0});
    map<int,vector<int>> mp;

    while(q.empty()==false)
    {
        auto curr = q.front();
        q.pop();

        int hd=curr.second;
        TreeNode* node= curr.first;

        mp[hd].push_back(node->val);

        if(node->left!=NULL)
            q.push({node->left,hd-1});

        if(node->right!=NULL)
            q.push({node->right,hd+1});
    }

    for(auto x:mp)
    {
        res.push_back(x.second);
    }

    return res;

}
