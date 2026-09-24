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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> even;
        vector<int> odd;
        ListNode* temp = head;
        int count = 1;
        while(temp){
            if(count%2==0){
                even.push_back(temp->val);
            }
            else{
                odd.push_back(temp->val);
            }
            temp = temp->next;
            count++;
        }
        int m = even.size();
        int n = odd.size();
        temp = head;
        for(int i=0;i<n;i++){
            temp->val = odd[i];
            temp=temp->next;
        }
        ListNode* extra = temp;
        for(int i=0;i<m;i++){
            extra->val = even[i];
            extra=extra->next;
        }
        return head;
    }
};