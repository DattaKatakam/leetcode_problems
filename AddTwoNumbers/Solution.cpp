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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* returnList = new ListNode();
        ListNode* returnHead = returnList;
        ListNode* instL1 = l1;
        ListNode* instL2 = l2;
        int extraDigit=0, unitDigit;
        while(instL1 != nullptr || instL2 != nullptr){
            if(instL1 != nullptr && instL2 != nullptr){
                int val = instL1->val + instL2->val + extraDigit;
                unitDigit = val % 10;
                extraDigit = val / 10; 
                returnList->next = new ListNode(unitDigit);
                instL1 = instL1->next;
                instL2 = instL2->next;
            }
            else if(instL1 != nullptr && instL2 == nullptr){
                int val = instL1->val + extraDigit;
                unitDigit = val % 10;
                extraDigit = val / 10; 
                returnList->next = new ListNode(unitDigit);
                instL1 = instL1->next;
            }
            else if(instL1 == nullptr && instL2 != nullptr){
                int val = instL2->val + extraDigit;
                unitDigit = val % 10;
                extraDigit = val / 10; 
                returnList->next = new ListNode(unitDigit);
                instL2 = instL2->next;
            }
            else{
                return returnHead->next;
            }
            returnList = returnList->next;
        }
        if(extraDigit > 0){
            int val = extraDigit;
            unitDigit = val % 10;
            extraDigit = val / 10; 
            returnList->next = new ListNode(unitDigit);
        }
        return returnHead->next;
    }
};