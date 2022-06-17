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
    int num_cam=0;
    pair<bool,bool>check(TreeNode* root)
    {
        //leaf node or no node
        if(root==NULL)
            return {false,true};
        pair<bool,bool>L=check(root->left);
        pair<bool,bool>R=check(root->right);
        bool has_cam=false,monitored=false;
        if(L.first||R.first)
            monitored=true;
        if(!L.second||!R.second)
        {
            has_cam=true;
            monitored=true;
            num_cam++;
        }
        return {has_cam,monitored};
    }
    int minCameraCover(TreeNode* root) {
        pair<bool,bool>temp=check(root);
        //special case
        if(!temp.second)
        {
            num_cam++;
        }
        return num_cam;
    }
    
};
