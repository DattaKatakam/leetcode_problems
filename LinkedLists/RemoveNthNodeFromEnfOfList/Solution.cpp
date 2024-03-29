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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next) return nullptr;
        int len =0;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr){
            len++;
            curr = curr->next;
        }
        if (len == n) {
            head = head->next;
            return head;
        }
        curr = head;
        for(int i = 0; i<=len-n-1; i++){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        return head;
    }
};