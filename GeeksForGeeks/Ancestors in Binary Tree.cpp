class Solution{
  public:
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         vector<int> res;
         help(root, target, res);

         reverse(res.begin(), res.end());
         return res;
    }

    bool help(struct Node* root, int target, vector<int>& res)
    {
        if(root==NULL)
            return false;

        if(root->data==target)
            return true;

        res.push_back(root->data);

        if(help(root->left, target, res) || help(root->right, target, res))
            return true;

        res.pop_back();
        return false;

    }
}
