class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	stack<Node*> s1,s2;
    	s1.push(root);
    	vector<int> res;

    	while(s1.empty()==false || s2.empty()==false)
    	{
    	    while(!s1.empty())
    	    {
    	        Node* curr = s1.top();
    	        s1.pop();

    	        res.push_back(curr->data);


    	        if(curr->left!=NULL)
    	            s2.push(curr->left);

    	       if(curr->right!=NULL)
    	            s2.push(curr->right);

    	    }

    	    while(!s2.empty())
    	    {
    	        Node* curr = s2.top();
    	        s2.pop();

                res.push_back(curr->data);

    	        if(curr->right!=NULL)
    	            s1.push(curr->right);

    	       if(curr->left!=NULL)
    	        s1.push(curr->left);
    	    }


    	}

    	return res;
    }
