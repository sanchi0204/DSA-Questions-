struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here

       if(root==NULL)
        return NULL;

       if(root->data==n1 || root->data==n2)
        return root;

        Node* lca1= lca(root->left,n1,n2);

        Node* lca2 = lca(root->right,n1,n2);

        if(lca1 && lca2)
            return root;

        if(!lca2)
            return lca1;

        else
            return lca2;
    }
};
