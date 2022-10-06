/*
 * @lc app=leetcode id=701 lang=cpp
 *
 * [701] Insert into a Binary Search Tree
 */

// @lc code=start

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            return root = new TreeNode(val);
        }
        TreeNode *now = root, *last = root;
        while(now && val != now -> val) {           
            last = now;
            if(val < now -> val){
                now = now -> left;
            }
            else{
                now = now -> right;
            }
        }
        now = new TreeNode(val);
        if(val < last -> val) {
            last -> left = now;
        }
        else {
            last -> right = now;
        }
        return root;
    }
};

// @lc code=end
