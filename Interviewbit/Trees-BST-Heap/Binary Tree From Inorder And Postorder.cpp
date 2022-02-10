/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* solve(vector<int> &A, vector<int> &B, int si, int ei, int& postIndex, unordered_map<int,int>& mp)
{
    if(si>ei)
        return NULL;

        int curr = B[postIndex--];
        TreeNode* root = new TreeNode(curr);

        if(si==ei)
        return root;

        int inIndex = mp[curr];

        root->right = solve(A,B,inIndex+1,ei, postIndex,mp);
        root->left = solve(A,B,si,inIndex-1,postIndex,mp);



    return root;

}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {

    unordered_map<int,int> mp;

    for(int i=0;i<A.size();i++)
        mp[A[i]]=i;

    int end=A.size()-1;
    int start = 0;
    int postIndex=B.size()-1;
    return solve(A,B,start,end,postIndex,mp);
}
