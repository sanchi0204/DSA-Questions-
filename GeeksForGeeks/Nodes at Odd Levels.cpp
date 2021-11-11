class Solution
{
public:
    vector<Node *> nodesAtOddLevels(Node *root)
    {
        //code here

        if(root==NULL)
            return {};

        int level=1;
        vector<Node*> v;

        queue<Node*> q;
        q.push(root);




        while(q.empty()==false)
        {

            int count = q.size();

            for(int i=0;i<count;i++)
            {
            Node* curr = q.front();
            q.pop();

            if(level%2!=0)
                v.push_back(curr);


            if(curr->left!=NULL)
                q.push(curr->left);

            if(curr->right!=NULL)
                q.push(curr->right);

            }

            level++;
        }


        return v;

    }
};
