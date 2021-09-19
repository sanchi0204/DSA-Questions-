class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here


        vector<int> res;

        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});

        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();

            int hd=curr.second;
            Node* node = curr.first;

            mp[hd]=node->data;

            if(node->left)
                q.push({node->left,hd-1});

            if(node->right)
                q.push({node->right,hd+1});
        }

        for(auto x:mp)
            res.push_back(x.second);

        return res;
    }
};
