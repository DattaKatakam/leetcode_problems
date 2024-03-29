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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr) return head;
        if(left == right) return head;
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        ListNode* leftHead = nullptr;
        int len = 1;
        while(curr){
            if(len == left){
                leftHead = curr;
                break;
            }
            len++;
            prev = curr;
            curr = curr->next;
        }
        ListNode* prevL = nullptr;
        ListNode* currL = leftHead;
        ListNode* succL;
        while(currL && len <=right){
            succL = currL->next;
            currL->next = prevL;
            prevL = currL;
            currL = succL;
            len++;
        }
        ListNode* lastR = prev->next;
        prev->next = prevL;
        leftHead = currL;
        if(!lastR->next) lastR->next = currL;
        return dummy->next; 
    }
};