/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively

Node* findPre(Node* root, int key)
{
    Node* pre=NULL;

    while(root!=NULL)
    {
        if(key<=root->key)
            root=root->left;

        else
        {
            pre=root;
            root=root->right;
        }
    }

    return pre;
}

Node* findSucc(Node* root, int key)
{
      Node* succ=NULL;

    while(root!=NULL)
    {
        if(key>=root->key)
            root=root->right;

        else
        {
            succ=root;
            root=root->left;
        }
    }

    return succ;

}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here

    pre = findPre(root,key);

    suc = findSucc(root,key);

}
