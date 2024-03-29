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
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* nodei = head;
        ListNode* nodej = head;
        while(nodej && nodej->next){
            nodei = nodei->next;
            nodej = nodej->next->next;
        }
        return nodei;
    }
};