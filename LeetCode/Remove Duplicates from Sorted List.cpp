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

    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL)
            return NULL;

   ListNode* curr = head;

        while (curr && curr->next) {

            ListNode* curr_next = curr->next;

            if (curr->val == curr_next->val)
                curr->next = curr_next->next;
            else
                curr=curr->next;
        }

        return head;
    }
};
