// Return the level (0-indexed) with maximum number of nodes.
int maxNodeLevel(Node *root)
{
 // Add your code here
        int level=0;
        queue<Node*> q;
        q.push(root);
        int mx=INT_MIN;
        int res=0;

        while(q.empty()==false)
        {
            int count=q.size();
            if(count>mx)
            {
                mx=count;
                res=level;
            }

           for(int i=0;i<count;i++)
           {
               Node* curr=q.front();
               q.pop();

               if(curr->left)
                q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
           }

           level++;
        }

        return res;
}
