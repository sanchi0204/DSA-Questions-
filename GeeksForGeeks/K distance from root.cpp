/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// function should print the nodes at k distance from root
void help(struct Node *root, int k, vector<int>& res)
{
    if(root==NULL)
        return;

    if(k==0)
    {
        res.push_back(root->data);
    }

    else
    {
        help(root->left,k-1,res);
        help(root->right,k-1,res);
    }
}
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
vector<int> res;

    if(root==NULL)
        return {};

    help(root,k,res);

    return res;
}
