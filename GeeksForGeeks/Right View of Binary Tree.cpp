class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       if(root==NULL)
        return {};

        queue<Node*> q;
        q.push(root);

        vector<int> res;

        while(q.empty()==false)
        {
            int count=q.size();

            while(count--)
            {
                Node *temp=q.front();
                q.pop();

                if(count==0)
                   res.push_back(temp->data);
                   //cout<<temp->data;

                if(temp->left!=NULL)
                    q.push(temp->left);

                if(temp->right!=NULL)
                    q.push(temp->right);
            }
        }

        return res;

    }
};
