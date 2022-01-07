class Solution
{
    public:

    int Findsum(Node* root)
    {
        if(root==NULL)
            return 0;

        return Findsum(root->left)+Findsum(root->right)+root->data;
    }
    bool isSumTree(Node* root)
    {
         // Your code here

         if(root==NULL)
            return true;

        if(root->left==NULL && root->right==NULL)
            return true;

        int sum=0;

        if(root->left!=NULL)
        sum+=Findsum(root->left);

        if(root->right!=NULL)
        sum+=Findsum(root->right);

        return ((sum==root->data) && isSumTree(root->left) && isSumTree(root->right));
    }
};
