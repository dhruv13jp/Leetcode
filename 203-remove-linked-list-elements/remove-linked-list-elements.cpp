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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val){
            ListNode* temp = head;
            head=temp->next;
            delete temp;
        }
        ListNode* cur = head;
        ListNode* prev = NULL;

        while(cur){
            if(cur->val==val){
                prev->next = cur->next;
                delete cur;
                cur = prev->next;
            }
            else{
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};