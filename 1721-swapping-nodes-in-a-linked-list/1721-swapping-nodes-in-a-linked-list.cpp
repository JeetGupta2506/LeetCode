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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast=head,*slow=head;
        while(--k)
        {
          fast=fast->next;
        }
        ListNode* temp=fast;
        while(fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
        int a=temp->val;
        temp->val=slow->val;
        slow->val=a;
        return head;
    }
};