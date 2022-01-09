class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        if(root==NULL)
            return {};

        queue<pair<Node*,int>> q;
        map<int,vector<int>> mp;
        q.push({root,0});

        while(q.empty()==false)
        {
            auto curr = q.front();
            q.pop();

            int hd=curr.second;
            Node* node = curr.first;

            mp[hd].push_back(node->data);

            if(node->left)
                q.push({node->left,hd-1});

            if(node->right)
                q.push({node->right,hd+1});
        }

        vector<int> res;
        for(auto x:mp)
        {
            for(auto y: x.second)

                    res.push_back(y);
        }

        return res;
    }
};
