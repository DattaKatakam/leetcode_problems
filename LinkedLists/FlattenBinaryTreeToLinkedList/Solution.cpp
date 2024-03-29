/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;
        TreeNode* curr = root;
        TreeNode* currL = curr->left;
        TreeNode* currR = curr->right;
        if(currL){
            flatten(currL);
            TreeNode* rightmost = currL;
            while (rightmost->right) {
                rightmost = rightmost->right;
            }
            curr->left = nullptr;
            curr->right = currL;
            rightmost->right = currR;
        }
        flatten(currR);
    }
};