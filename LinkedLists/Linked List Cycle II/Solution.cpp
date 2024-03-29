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
    ListNode *detectCycle(ListNode *head) {
        std::set<ListNode*> mySet;
        ListNode* node = head;
        while(node){
            if(!mySet.insert(node).second) return node;
            node=node->next;
        }
        return nullptr;
    }
};