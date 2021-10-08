
class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       if(root==NULL)
        return;

        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            int count=q.size();

            for(int i=0;i<count;i++)
            {
                Node* curr =q.front();
                q.pop();

                if(i==count-1)
                    curr->nextRight=NULL;
                else
                    curr->nextRight=q.front();

                if(curr->left!=NULL)
                    q.push(curr->left);

                if(curr->right!=NULL)
                    q.push(curr->right);
            }
        }

    }

};
