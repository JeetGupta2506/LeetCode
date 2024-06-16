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
    ListNode* swapPairs(ListNode* head) {
        if (head==nullptr || head->next==nullptr)
        {
            return head;
        }
        ListNode* dummy=new ListNode(-1,head);
        ListNode* point=dummy;
       
        while(point->next!=nullptr && point->next->next!=nullptr)
        {
             ListNode* swap1=point->next;
        ListNode* swap2=point->next->next;
        swap1->next=swap2->next;
        point->next=swap2;
        swap2->next=swap1;
        point=swap1;
            
        }
        return dummy->next;
    }
};