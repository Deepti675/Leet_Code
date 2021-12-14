/*Input: root = [10,5,15,3,7,null,18], low = 7, high = 15
Output: 32
Explanation: Nodes 7, 10, and 15 are in the range [7, 15]. 7 + 10 + 15 = 32.
*/
//inorder method
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
        int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        inorder(root,low,high,sum);
        return sum;
           }
    void inorder(TreeNode* root,int low,int high,int &sum)
    {
         
        if(root->left)
        
         inorder(root->left,low,high,sum);
        if(root->val<=high&&root->val>=low)
         sum+=root->val;
        if(root->right)
         inorder(root->right,low,high,sum);   
        
        
    }

};
