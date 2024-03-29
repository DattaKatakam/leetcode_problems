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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* curr = head;
        ListNode* prev = head;
        ListNode* evenPosH = head->next;
        ListNode* evenPosN = nullptr;
        int len = 0;
        while(curr){
            if(len % 2 != 0){
                if(evenPosN){
                    evenPosN->next = curr;
                    evenPosN = evenPosN->next;
                }
                else{
                    evenPosN = curr;
                }
                prev->next = curr->next;
                if(curr->next){
                    prev = curr->next;
                }
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
            len++;
        }
        prev->next = evenPosH;
        if (evenPosN)
            evenPosN->next = nullptr; 
        return head;
    }
};