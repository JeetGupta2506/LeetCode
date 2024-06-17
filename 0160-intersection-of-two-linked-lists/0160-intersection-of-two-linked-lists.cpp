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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA,*temp2=headB;
        int a=0,b=0;
        while(temp1!=nullptr)
        {
            a++;
            temp1=temp1->next;
        }
         while(temp2!=nullptr)
        {
            b++;
            temp2=temp2->next;
        }
        int diff=abs(a-b);
        if(a>b)
        {
            while(diff--)
            {
                headA=headA->next;
            
            }
        }
        else
        {
            while(diff--)
            {
                headB=headB->next;
            
            }
        }
        while(headA!=nullptr && headB!=nullptr)
        {
            if(headA==headB)
            return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};