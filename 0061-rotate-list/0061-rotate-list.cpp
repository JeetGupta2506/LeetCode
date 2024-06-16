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
    int getsize(ListNode* head)
    {
        int n=0;
        while(head!=nullptr)
        {
            n++;
            head=head->next;
        }
        return n;
    }
    ListNode* rotateRight(ListNode* head, int k)
     {
        if(head==nullptr || k==0 )
        return head;
        int n=getsize(head);
        int loop=k%n;
        if(loop==0)
        return head;
        loop=n-loop;
        ListNode* temp=head,*firstadd=head;
        int j=0;
        while(temp!=nullptr)
        {
          j++;
          if(j==loop)
          {
            firstadd=temp->next;
            temp->next=nullptr;
            break;
          }
          temp=temp->next;
        }
        temp=firstadd;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=head;
        return firstadd;
    }
};