class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
     int checkBalanced(Node* root)
     {
        if(root==NULL)
            return 0;

        int lh=checkBalanced(root->left);
        if(lh==-1)
            return -1;

        int rh=checkBalanced(root->right);
        if(rh==-1)
            return -1;

        if(abs(lh-rh)>1)
            return -1;

            return max(lh,rh)+1;
     }
    bool isBalanced(Node *root)
    {
        //  Your Code here

      return checkBalanced(root)!=-1;
    }
};
