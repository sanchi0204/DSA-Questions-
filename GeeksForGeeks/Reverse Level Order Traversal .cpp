vector<int> reverseLevelOrder(Node *root)
{
    // code here
    if(root==NULL)
        return {};

        vector<int> v;

    queue<Node*> q;
    stack<int> s;
    q.push(root);

    while(q.empty()==false)
    {
        Node* temp = q.front();
        q.pop();

        s.push(temp->data);

               if(temp->right!=NULL)
            q.push(temp->right);

             if(temp->left!=NULL)
            q.push(temp->left);
    }


    while(s.empty()==false)
    {
        v.push_back(s.top());
        s.pop();
    }

    return v;
}
