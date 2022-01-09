Node* solve(int in[], int post[], int n, int si, int ei, int& p, unordered_map<int,int>& mp)
{
    if(si>ei)
        return NULL;

    int curr = post[p--];
    Node* node = new Node(curr);

    if(si==ei)
        return node;

    int inIndex = mp[curr];

    node->right = solve(in,post,n,inIndex+1,ei,p,mp);
    node->left = solve(in,post,n,si,inIndex-1,p,mp);

    return node;

}
Node *buildTree(int in[], int post[], int n) {
    // Your code here

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
        mp[in[i]]=i;

    int p=n-1;

    return solve(in, post, n, 0,n-1,p,mp);

}
