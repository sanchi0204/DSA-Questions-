Node *mergeList(Node* A, Node* B)
{
    Node *res = new Node(-1);
    Node *temp =res;

    while(A!=NULL && B!=NULL)
    {
        if(A->data<B->data)
        {
            temp->bottom = A;
            temp=temp->bottom;
            A=A->bottom;

        }

        else
        {
           temp->bottom=B;
           temp=temp->bottom;
            B=B->bottom;
        }
    }


    if(A!=NULL)
    temp->bottom=A;

    if(B!=NULL)
    temp->bottom=B;

    return res->bottom;
}

Node *flatten(Node *root)
{
   // Your code here

   if(root==NULL || root->next==NULL)
    return root;

    root->next = flatten(root->next);

   root=mergeList(root, root->next);

   return root;

}
