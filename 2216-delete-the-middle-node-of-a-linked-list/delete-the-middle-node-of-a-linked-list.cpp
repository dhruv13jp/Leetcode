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
    ListNode* deleteMiddle(ListNode* head) {
      if(head == NULL || head->next == NULL) return NULL;

        else if(head->next->next==NULL){
            delete head->next;
            head->next=NULL;
            return head;
        }
        
        ListNode* temp = head;
        int count = 0;
        while(temp){    
            count++;
            temp=temp->next;
        }   
        int deletenode = (count/2);
        count=1;
        temp=head;
        while(count!=deletenode){
            temp=temp->next;
            count++;
        }   
        ListNode* newtemp;
        newtemp=temp->next;
        temp->next=temp->next->next;
        newtemp->next=NULL;
        delete newtemp;
        return head;
    }       
};          