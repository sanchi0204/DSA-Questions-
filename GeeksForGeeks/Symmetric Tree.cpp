/* Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:

    bool help(struct Node* p, struct Node* q)
    {
        if(p==NULL && q==NULL)
	    return true;

	   else if(p==NULL || q==NULL)
	    return false;

	   else if(p->data != q->data)
	    return false;

	    return (help(p->left, q->right) && help(p->right, q->left));
    }
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(root==NULL)
	        return true;



return help(root->left, root->right);


    }
};
