class Solution {
  public:

  int help(Node* root)
  {
      if(root==NULL)
        return 0;

    int oldVal=root->data;

    root->data = help(root->left) + help(root->right);

    return oldVal+root->data;
  }

    void toSumTree(Node *node)
    {
        // Your code here

        help(node);

    }
};
