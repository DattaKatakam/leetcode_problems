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
        if(head == nullptr) return head;
        while(head != nullptr && head->val == val){
            head = head->next;
        }
        if(head == nullptr) return nullptr;
        ListNode* nodei = head;
        ListNode* nodej = nodei->next;
        while(nodei!=nullptr && nodej!=nullptr){
            if(nodej->val == val){
                nodej = nodej->next;
                nodei->next = nodej;
            }
            else{
                nodei = nodej;
                nodej = nodej->next;
            }
        }
        return head;
    }
};