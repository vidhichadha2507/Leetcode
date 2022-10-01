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
    void reverse(TreeNode* L, TreeNode* R, int l){
        if(L == NULL || R == NULL) return;
        if(l%2 == 0){
            swap(L->val, R->val);
        }
        reverse(L->left, R->right, l+1);
        reverse(L->right, R->left, l+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        reverse(root->left, root->right, 0);
        return root;
    }
};
