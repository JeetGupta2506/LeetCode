/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        if(head==nullptr || head->next==nullptr)
        return nullptr;
        ListNode* slow=head,*fast=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                ListNode* ptr=head;
                while(ptr!=slow)
                {
                    ptr=ptr->next;
                    slow=slow->next;
                }
                return ptr;
            }
            
        }
return nullptr;
}
};