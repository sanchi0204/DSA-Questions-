class Solution
{
public:
    int findMax(Node *root)
    {
        //code here
         if(root==NULL)
        return INT_MIN;

    int mn = INT_MIN;
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        mn=max(mn,temp->data);

        if(temp->left!=NULL)
            q.push(temp->left);

        if(temp->right!=NULL)
            q.push(temp->right);
    }

    return mn;
    }
    int findMin(Node *root)
    {
        //code here
         if(root==NULL)
        return INT_MAX;

    int mn = INT_MAX;
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        mn=min(mn,temp->data);

        if(temp->left!=NULL)
            q.push(temp->left);

        if(temp->right!=NULL)
            q.push(temp->right);
    }

    return mn;
    }
};
