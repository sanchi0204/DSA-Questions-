/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 TreeNode* solve(const vector<int> &A, int low, int high)
 {
     if(low<=high)
     {
        int mid=low+(high-low)/2;

        TreeNode* root = new TreeNode(A[mid]);

        root->left=solve(A,low,mid-1);
        root->right = solve(A,mid+1,high);

        return root;

 }

 return NULL;

 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {

    if(A.size()==0)
        return NULL;

    int low=0;
    int high=A.size()-1;

    return solve(A,low,high);
    }
