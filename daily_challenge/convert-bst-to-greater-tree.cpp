//https://leetcode.com/problems/convert-bst-to-greater-tree/
//reverse in order traversal (right,root,left)
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
    int res=0;
public:
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL)return NULL;
        //right,root,left
              convertBST(root->right);
              res+=root->val;
              root->val=res;
              convertBST(root->left);
        return root;
    }
};
