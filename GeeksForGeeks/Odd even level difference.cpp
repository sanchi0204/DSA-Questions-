class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       //Your code here
       if(root==NULL)
        return 0;

        int sumO=0;
        int sumE=0;

        int level=1;

        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            int count=q.size();

            for(int i=0;i<count;i++)
            {
                Node* temp = q.front();
                q.pop();

                if(level%2==0)
                    sumE+=temp->data;

                else
                    sumO+=temp->data;

                if(temp->left!=NULL)
                    q.push(temp->left);

                if(temp->right!=NULL)
                    q.push(temp->right);

            }

            level++;
        }

        return sumO-sumE;
    }
};
