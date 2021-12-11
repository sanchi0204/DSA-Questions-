vector<int> noSibling(Node* node)
{
    if(node==NULL)
        return {-1};

    vector<int> res;

   queue<Node*> q;
   q.push(node);

    while(q.empty()==false)
    {
        Node* curr = q.front();
        q.pop();

        if(curr->left!=NULL && curr->right==NULL)
            res.push_back(curr->left->data);

        else if(curr->left==NULL && curr->right!=NULL)
            res.push_back(curr->right->data);

        if(curr->left!=NULL)
            q.push(curr->left);

        if(curr->right!=NULL)
            q.push(curr->right);
    }

    if(res.size()==0)
        return {-1};

     sort(res.begin(),res.end());
    return res;
}
