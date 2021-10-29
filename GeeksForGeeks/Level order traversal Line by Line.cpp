
/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  if(node==NULL)
    return {{}};

    vector<vector<int>> res;

    queue<Node*> q;
    q.push(node);

    while(!q.empty())
    {
        int count=q.size();
        vector<int> v;

        for(int i=0;i<count;i++)
        {
            Node* temp = q.front();
            q.pop();
            v.push_back(temp->data);

            if(temp->left!=NULL)
                q.push(temp->left);

            if(temp->right!=NULL)
                q.push(temp->right);
        }

        res.push_back(v);

    }

    return res;
}
