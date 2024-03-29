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
    bool isPalindrome(ListNode* head) {
        string val = "";
        ListNode* node = head;
        while(node){
            val += std::to_string(node->val);
            node = node->next;
        }
        return checkPallindrome(val);
    }
    bool checkPallindrome(string str){
        int StrLen = str.length();
        for(int i =0, j=StrLen-1; i<j; i++, j--){
            if(str[i] != str[j]) return false;
        }
        return true;
    }
};