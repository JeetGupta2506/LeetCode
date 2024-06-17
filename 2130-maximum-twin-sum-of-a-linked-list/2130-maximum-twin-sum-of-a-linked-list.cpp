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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head,*prev=nullptr,*nextnode=nullptr;
        while(curr)
        {
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
            
            
        }
        return prev;
        
    }
    int pairSum(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=reverse(slow);
        ListNode* curr=head;
        int result=0;
        while(mid)
        {
            result=max(result,curr->val+mid->val);
            curr=curr->next;
            mid=mid->next;
        }
        return result;
    }
};