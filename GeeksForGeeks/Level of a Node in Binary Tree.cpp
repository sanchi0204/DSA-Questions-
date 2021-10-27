class Solution{
  public:
    // function should return level of the target node
    int getLevel(struct Node *node, int target)
    {
    	//code here
    	if(node==NULL)
    	    return 0;

    	  if(node->data==target)
    	    return 1;

    	 int level=1;
    	 queue<struct Node*> q;
    	 q.push(node);

    	 while(!q.empty())
    	 {
    	     int count=q.size();

    	     for(int i=0;i<count;i++)
    	     {
    	          Node* temp=q.front();
    	     q.pop();

    	   if(temp->data==target)
    	    return level;

    	   if(temp->left!=NULL)
    	    q.push(temp->left);

    	   if(temp->right!=NULL)
    	    q.push(temp->right);

    	     }

    	    level++;

    	 }



    }
};
