/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {

        ListNode* curr = head;
        int res=0;
        int count=0;

        while(curr)
        {
            count++;
            curr = curr->next;
        }

        curr=head;

        while(count)
        {
            res = res + pow(2,--count)*curr->val;
            curr = curr->next;
        }


        return res;

    }
};
