struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */


class Solution
{
    vector<int> v;
    public:
    //Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root)
    {
      // Your code here
      if(root!=NULL)
      {
          inOrder(root->left);
          v.push_back(root->data);
          inOrder(root->right);
      }

      return v;
    }
};
