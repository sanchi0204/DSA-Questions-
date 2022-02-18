/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    if(A==NULL)
        return ;

    queue<TreeLinkNode*> q;
    q.push(A);

    while(!q.empty())
    {
        int count=q.size();

        for(int i=0;i<count;i++)
        {
            TreeLinkNode* curr = q.front();
            q.pop();

            if(i==count-1)
                curr->next = NULL;

            else
                curr->next = q.front();

            if(curr->left!=NULL)
                q.push(curr->left);

            if(curr->right!=NULL)
                q.push(curr->right);

        }

    }
}
