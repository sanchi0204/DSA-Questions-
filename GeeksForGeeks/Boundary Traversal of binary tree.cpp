class Solution {
public:
    void LeftBoundary(Node* root, vector<int> &res)
    {
        if(root==NULL)
            return;

        if(root->left)
        {
            res.push_back(root->data);
            LeftBoundary(root->left,res);
        }

        else if(root->right)
        {
            res.push_back(root->data);
            LeftBoundary(root->right,res);
        }
    }


    void RightBoundary(Node* root, vector<int> &res)
    {
        if(root==NULL)
            return;

        if(root->right)
        {
            RightBoundary(root->right, res);
            res.push_back(root->data);
        }

        else if(root->left)
        {
            RightBoundary(root->left, res);
            res.push_back(root->data);
        }
    }


    void Leaves(Node* root, vector<int> &res)
    {
        if(root==NULL)
            return;

        Leaves(root->left, res);

        if(root->left==NULL && root->right==NULL)
            res.push_back(root->data);

        Leaves(root->right, res);
    }


    vector <int> printBoundary(Node *root)
    {
        //Your code here

        if(root==NULL)
            return {};

        vector<int> res;
        res.push_back(root->data);

        LeftBoundary(root->left, res);
        Leaves(root->left, res);
        Leaves(root->right,res);
        RightBoundary(root->right,res);

        return res;
    }
};
