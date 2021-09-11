class Solution
{
    public:

    int old=0;

    void transformTree(struct Node *root)
    {
        //code here
      if(root==NULL)
            return;

        transformTree(root->right);

        int val=root->data;
        root->data=old;
        old+=val;

        transformTree(root->left);


    }
};
