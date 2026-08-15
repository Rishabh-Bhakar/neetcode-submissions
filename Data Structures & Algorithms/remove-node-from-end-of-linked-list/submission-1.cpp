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
    private:
    int countLength(ListNode* head){
      ListNode* temp=head;
      int count=0;
      while(temp!=nullptr){
        temp=temp->next;
        count++;
      }
      
      return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=countLength(head);
        int pos=len-n+1;
        ListNode* temp=head;
        ListNode dummy;
        dummy.next=head;
        ListNode* prev=&dummy;
        int count=1;
        while(temp!=nullptr && count!=pos){
            prev=temp;
            temp=temp->next;
            count++;

        }
        if(count==pos){
            prev->next=temp->next;
            temp->next=nullptr;
            delete temp;
        }
        return dummy.next;

        
    }
};
