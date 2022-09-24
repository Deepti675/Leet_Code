https://leetcode.com/problems/path-sum-ii/
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
    vector<vector<int>>result;
    void f(TreeNode* root,int targetSum,vector<int>&v){
        if(!root)return;
        v.push_back(root->val);
        targetSum-=root->val;
        if(!root->left && !root->right)
        {
            if(targetSum==0)
                result.push_back(v);
        } else
            {
                f(root->left,targetSum,v);
                f(root->right,targetSum,v);
            }
            v.pop_back();       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        f(root,targetSum,v);
        return result;
    }
};
