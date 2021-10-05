class Solution {
  public:

  int help(Node* root, int& res)
  {
      if(root==NULL)
        return 0;

    int lh = help(root->left,res);

    int rh = help(root->right, res);

    res = max(res, lh+rh+1);

    return max(lh,rh)+1;
  }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here

        if(root==NULL)
            return 0;

        int res=INT_MIN;

        help(root,res);

        return res;
    }
};
