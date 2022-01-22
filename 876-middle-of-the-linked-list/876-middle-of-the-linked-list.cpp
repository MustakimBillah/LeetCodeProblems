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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* two=head;
        
        while(two->next!=NULL){
            
            head=head->next;
            two=two->next;
            if(two->next!=NULL) two =two->next;
        }
        return head;
    }
};