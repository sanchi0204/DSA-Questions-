class Solution{
  public:
    vector <int> verticalSum(Node *root) {
        // add code here.

        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});

        while(q.empty()==false)
        {
            auto curr = q.front();
            q.pop();

            Node* val=curr.first;
            int hd=curr.second;

            mp[hd]+=val->data;

            if(val->left)
                q.push({val->left,hd-1});

            if(val->right)
                q.push({val->right,hd+1});
        }

        vector<int> res;
        for(auto x:mp)
            res.push_back(x.second);


    return res;
    }
};
