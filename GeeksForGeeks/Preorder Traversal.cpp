void help(Node* root,vector<int>& res)
{
    if(root==NULL)
        return;

     res.push_back(root->data);

    help(root->left,res);

    help(root->right,res);



}
vector <int> preorder(Node* root)
{
  // Your code here
   vector<int> res;

  if(root==NULL)
    return {};


   else
    help(root,res);

    return res;

}
