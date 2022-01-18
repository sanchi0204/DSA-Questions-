/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* findMid(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head;
    ListNode* prev=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }

    if(prev!=NULL)
        prev->next=NULL;

    return slow;
}
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A==NULL)
        return NULL;

    ListNode* mid = findMid(A);

    TreeNode* root = new TreeNode(mid->val);

    if(A==mid)
        return root;

    root->left = sortedListToBST(A);
    root->right = sortedListToBST(mid->next);

    return root;
}
int Solution::minDistance(string A, string B) {

    int m=A.length();
    int n=B.length();

    int dp[m+1][n+1];

    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0)
                dp[i][j]=j;

            else if(j==0)
                dp[i][j]=i;

            else if(A[i-1]==B[j-1])
                dp[i][j]=dp[i-1][j-1];

            else
                dp[i][j]=1+min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
        }
    }

    return dp[m][n];
}
