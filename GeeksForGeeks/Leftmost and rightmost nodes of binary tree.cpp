void printCorner(Node *root)
{

// Your code goes here
queue<Node*> q;
q.push(root);

while(q.empty()==false)
{
    int count=q.size();

    for(int i=0;i<count;i++)
    {

    Node* curr=q.front();
    q.pop();

    if(i==0)
        cout<<curr->data<<" ";

    if(i==count-1 && i!=0)
        cout<<curr->data<<" ";


    if(curr->left!=NULL)
        q.push(curr->left);

    if(curr->right!=NULL)
        q.push(curr->right);
    }
}

}
