void mirror(struct Node* node) {
    // code here

    if(node==NULL)
        return;

    struct Node* temp = node->left;
    node->left=node->right;
    node->right=temp;

    if(node->left)
        mirror(node->left);

    if(node->right)
        mirror(node->right);

}
