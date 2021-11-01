class Solution {
  public:

  int getMaxSum(Node* root, int& res)
  {
      if(root==NULL)
        return 0;

        int left = max(0,getMaxSum(root->left,res));
        int right = max(0,getMaxSum(root->right,res));

        res = max(res, left+right+root->data);

        return max(left,right)+root->data;
  }
    //Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node* root)
    {
        // Your code goes here

        if(root==NULL)
            return 0;

        int res=INT_MIN;
        getMaxSum(root,res);

        return res;
    }
};
