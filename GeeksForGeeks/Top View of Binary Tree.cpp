class Solution
{
    public:
    //Function to return a list of nodes visible from the top view
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        if(root==NULL)
            return {};

        vector<int> res;
        map<int,int> mp;

        queue<pair<Node*, int>> q;
        q.push({root,0});

        while(!q.empty())
        {
            auto p=q.front();


            Node* temp=p.first;
            int hd=p.second;

            if(mp.find(hd)==mp.end())
                mp[hd]=temp->data;

               q.pop();

            if(temp->left!=NULL)
                q.push({temp->left,hd-1});

            if(temp->right!=NULL)
                q.push({temp->right,hd+1});

        }

        for(auto x:mp)
            res.push_back(x.second);


        return res;
    }

};
