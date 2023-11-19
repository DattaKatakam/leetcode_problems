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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* returnList = new ListNode();
        ListNode* returnHead = returnList;
        int i = 0, j = 0, count = 0;
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        while(l1 != nullptr || l2 != nullptr){
            while(l1 != nullptr && l2 != nullptr){
                if(l1->val < l2->val){
                    returnList->next = new ListNode(l1->val);
                    l1 = l1->next;
                    returnList = returnList->next;
                }
                else{
                    returnList->next = new ListNode(l2->val);
                    l2 = l2->next;
                    returnList = returnList->next;
                }
            }
            while(l1 != nullptr && l2 == nullptr){
                returnList->next = new ListNode(l1->val);
                l1 = l1->next;
                returnList = returnList->next;
            }
            
            while(l1 == nullptr && l2 != nullptr){
                
                returnList->next = new ListNode(l2->val);
                l2 = l2->next;
                returnList = returnList->next;
            
            }

        }
        return returnHead->next;
    }
};