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
    int max(int a, int b){
        return (a>=b ? a:b);
    }
    int height(TreeNode* node){
        if(node==NULL){return 0;}
        return (1+max(height(node->left),height(node->right)));
    }
    bool isBalanced(TreeNode* node) {
     int lefth;
     int righth;
     if(node== NULL)
         return 1;
     lefth=height(node->left);
     righth=height(node->right);
     if (abs(lefth - righth) <= 1 && isBalanced(node->left) && isBalanced(node->right))
        return 1;
     return 0;
 
    }
};
