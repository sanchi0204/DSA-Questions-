class Solution{
    public:

    Node* buildTreeUtil(int in[],int pre[], int n, unordered_map<int,int>& mp, int& preIndex, int start, int end)
    {
        if(start>end)
            return NULL;

        int curr = pre[preIndex++];
        Node* node = new Node(curr);

        if(start==end)
            return node;

            int inIndex = mp[curr];

        node->left = buildTreeUtil(in,pre,n,mp,preIndex,start,inIndex-1);

        node->right = buildTreeUtil(in,pre,n,mp,preIndex,inIndex+1,end);

        return node;




    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++)
            mp[in[i]]=i;

            int p=0;

        return buildTreeUtil(in,pre,n,mp,p,0,n-1);
    }
};
