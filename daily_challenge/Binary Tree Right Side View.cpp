https://leetcode.com/problems/binary-tree-right-side-view/
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        fun(root,0,ans);
        return ans;
    }
    void fun(TreeNode* root,int lev,vector<int>&ans)
    {
        if(root==NULL)
            return;
        if(ans.size()==lev)
        {
            ans.push_back(root->val);
           
        }
         fun(root->right,lev+1,ans);
         fun(root->left,lev+1,ans);
    }
};
