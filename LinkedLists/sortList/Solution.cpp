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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* leftN = head;
        ListNode* listNodeTail = middleNode(head);
        ListNode* rightN = listNodeTail->next;
        listNodeTail->next = nullptr;

        leftN = sortList(leftN);
        rightN = sortList(rightN);
        return mergeList(leftN, rightN);
    }
    ListNode* middleNode(ListNode* node){
        ListNode* prev = node;
        ListNode* curr = node->next;
        while(curr && curr->next){
            prev = prev->next;
            curr = curr->next->next;
        }
        return prev;
    }
    ListNode* mergeList(ListNode* left, ListNode* right){
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;
        while(left && right){
            if(left->val < right->val){
                tail->next = left;
                left = left->next;
            }
            else{
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
            if(left) tail->next = left;
            if(right) tail->next = right;
        }
        return dummy->next;
    }
};