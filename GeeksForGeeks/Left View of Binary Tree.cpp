vector<int> leftView(Node *root)
{
   // Your code here

   if(root==NULL)
    return {};

    queue<Node*> q;
    q.push(root);

    vector<int> res;

    while(q.empty()==false)
    {
        int count = q.size();

        for(int i=0;i<count;i++)
        {
              Node* temp=q.front();
                q.pop();

                if(i==0)
                    res.push_back(temp->data);


            if(temp->left!=NULL)
                q.push(temp->left);

            if(temp->right!=NULL)
                q.push(temp->right);


        }



    }

    return res;
}
