class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        // Your code here
        if(root==NULL)
            return 0;

        queue<Node*> q;
        q.push(root);

        int size=INT_MIN;

        while(!q.empty())
        {
            int count=q.size();

            for(int i=0;i<count;i++)
            {
                Node* temp = q.front();
                q.pop();

                if(temp->left!=NULL)
                    q.push(temp->left);

                if(temp->right!=NULL)
                    q.push(temp->right);


            }

            size = max(size, count);
        }

        return size;
    }
};
