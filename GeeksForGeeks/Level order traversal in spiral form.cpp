vector<int> findSpiral(Node *root)
{
    //Your code here

    vector<int> res;

    if(root==NULL)
        return res;


     stack<Node*> s1,s2;
     s1.push(root);

    while(s1.empty()==false || s2.empty()==false)
    {
        while(s1.empty()==false)
        {
            Node* curr = s1.top();
            s1.pop();
            res.push_back(curr->data);

            if(curr->right!=NULL)
                s2.push(curr->right);

             if(curr->left!=NULL)
                s2.push(curr->left);


        }

        while(s2.empty()==false)
        {
            Node* curr=s2.top();
            s2.pop();
            res.push_back(curr->data);

                if(curr->left!=NULL)
                s1.push(curr->left);

             if(curr->right!=NULL)
                s1.push(curr->right);




        }
    }

    return res;
}
