/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::set<ListNode*> mySet;
        ListNode* curr = headA;
        while(curr){
            mySet.insert(curr);
            curr = curr->next;
        }
        curr = headB;
        while(curr){
            if(!mySet.insert(curr).second) return curr;
            curr = curr->next;
        }
        return nullptr;
    }
};