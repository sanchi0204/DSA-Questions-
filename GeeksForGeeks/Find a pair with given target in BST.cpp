class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    bool find(struct Node* root, int target, unordered_set<int>& s)
    {
        if(root==NULL)
            return false;

        if(find(root->left,target,s))
            return true;

        if(s.find(target-root->data)!=s.end())
            return true;

        else
            s.insert(root->data);

        return find(root->right,target,s);

    }

    int isPairPresent(struct Node *root, int target)
    {
    //add code here.

        unordered_set<int> s;

        if(find(root,target,s)==true)
            return 1;


        return 0;
    }
};
