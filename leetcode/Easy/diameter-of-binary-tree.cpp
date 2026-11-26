// Problem: Diameter of Binary Tree
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/diameter-of-binary-tree/
// Solved on: 2026-11-26T10:12:51.449Z

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
class Solution{
public:
    int height(TreeNode* root,int &diameter){
        if(root==NULL)return 0;
        int lheight=height(root->left,diameter);
        int rheight=height(root->right,diameter);
        diameter=max(diameter,lheight+rheight);
        return 1+max(lheight,rheight);
    }
    int diameterOfBinaryTree(TreeNode* root){
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
};