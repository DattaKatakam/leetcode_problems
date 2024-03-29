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
        ListNode* curr = head;
        ListNode* prev = head;
        std::set<int> setMap;
        while(curr){
            if(setMap.contains(curr->val)){
                prev->next=curr->next;
                curr = curr->next;
            }
            else{
                setMap.insert(curr->val);
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};