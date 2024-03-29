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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode* headNode = head;
        ListNode* prev = headNode;
        ListNode* curr = headNode;
        bool modified = false;
        int rotation = 0, listLen = 0;
        while(curr){
            curr = curr->next;
            listLen++;
        }
        curr = headNode;
        while(rotation < k){
            while(curr->next){
                modified = true;
                prev = curr;
                curr = curr->next;
            }
            if(!modified) return head;
            prev->next = nullptr;
            curr->next = headNode;
            headNode = curr;
            rotation++;
            if(rotation == (k % listLen)) return headNode;
        }
        return headNode;
    }
};