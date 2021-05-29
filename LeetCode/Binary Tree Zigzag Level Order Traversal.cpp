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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> v;

        if(root==NULL)
            return v;

        stack<TreeNode*> s1,s2;
        s1.push(root);

        while(!s1.empty() || !s2.empty())
        {
            vector<int> curr_v1,curr_v2;

            while(!s1.empty())
            {
                TreeNode* curr= s1.top();
                s1.pop();
                curr_v1.push_back(curr->val);

                if(curr->left!=NULL)
                    s2.push(curr->left);

                if(curr->right!=NULL)
                    s2.push(curr->right);
            }

            if(curr_v1.size()!=0)
                v.push_back(curr_v1);

            while(!s2.empty())
            {
                TreeNode* curr= s2.top();
                s2.pop();
                curr_v2.push_back(curr->val);

                if(curr->right!=NULL)
                    s1.push(curr->right);

                if(curr->left!=NULL)
                    s1.push(curr->left);
            }

            if(curr_v2.size()!=0)
                v.push_back(curr_v2);

        }

        return v;

    }

};
