class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here

      if(node==NULL)
        return {};

      vector<int> res;

      queue<Node*> q;
      q.push(node);

      while(q.empty()==false)
      {
          Node* temp = q.front();
          q.pop();

          res.push_back(temp->data);

          if(temp->left!=NULL)
            q.push(temp->left);

            if(temp->right!=NULL)
                q.push(temp->right);
      }

      return res;
    }
};
