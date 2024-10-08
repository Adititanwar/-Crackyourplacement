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
    ListNode* deleteDuplicates(ListNode* head) {
       if( head == NULL){
        return head;
       } 
       ListNode* cur = head;
       while(cur != NULL && cur-> next != NULL){
        if( cur->val == cur->next->val){
            ListNode* next = cur->next->next;
            delete (cur->next);
            cur->next = next;
        }
        else{
            cur = cur->next;
        }
       }
       return head;
    }
};