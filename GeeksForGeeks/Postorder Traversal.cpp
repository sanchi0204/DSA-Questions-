void help(Node* root, vector<int>& res)
{
    if(root==NULL)
        return;

    help(root->left,res);
    help(root->right,res);

    res.push_back(root->data);


}
vector <int> postOrder(Node* root)
{
  // Your code here
    vector<int> res;
  if(root==NULL)
    return {};


  else
    help(root, res);

    return res;
}
