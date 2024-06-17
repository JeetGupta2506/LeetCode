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
        if(head==nullptr || head->next==nullptr)
        return head;

        ListNode* prev=nullptr, *nextnode=nullptr, *curr=head;
        while(curr!=nullptr)
        {
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
    }

    ListNode* middle(ListNode* head)
    {
        if(head==nullptr || head->next==nullptr)
        return head;

        ListNode* fast=head, *slow=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* mid=middle(head);
        ListNode* sechead=reverse(mid);
        ListNode* firsthead=head;
        while(sechead!=nullptr)
        {
            if(firsthead->val!=sechead->val)
            return false;
            sechead=sechead->next;
            firsthead=firsthead->next;
        }
        return true;
    }
};