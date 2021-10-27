class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        //code here

        queue<Node*> q;
        q.push(root);
        vector<int> v;


        while(q.empty()==false)
        {
            int count=q.size();
             int  mx=INT_MIN;

            for(int i=0;i<count;i++)
            {
                Node* curr=q.front();
                q.pop();

                mx=max(mx,curr->data);

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }

            v.push_back(mx);

        }

        return v;
    }
};
