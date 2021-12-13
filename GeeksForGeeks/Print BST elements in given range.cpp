class Solution {
  public:

  void findNodes(Node* root, int low, int high, vector<int>& res)
  {
      if(root==NULL)
        return;

        findNodes(root->left,low,high,res);

        if(root->data>=low && root->data<=high)
            res.push_back(root->data);


        findNodes(root->right,low,high,res);
  }
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here
        vector<int> res;
        findNodes(root,low,high,res);

        return res;
    }
};
