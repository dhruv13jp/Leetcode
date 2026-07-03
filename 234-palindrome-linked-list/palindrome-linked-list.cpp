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
ListNode* reverselist(ListNode* head){
    ListNode* prev=NULL;
    ListNode* temp=head;
    ListNode* front=head;
    while(temp){
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}   

class Solution {
public:     
    bool isPalindrome(ListNode* head) {
       ListNode* slow=head;
       ListNode* fast=head;
       ListNode* temp = head;
       ListNode* newhead;
       while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
       }    
       newhead=reverselist(slow);
       while(newhead!=NULL){
        if(temp->val==newhead->val){
            temp=temp->next;
            newhead=newhead->next;
        }   
        else return false;
       }    
       return true;
    }       
};          