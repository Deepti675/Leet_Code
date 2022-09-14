https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/
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
    void f(TreeNode* root,int &count,vector<int>&v){
        if(root==NULL)return;
        v[root->val]++;
        f(root->left,count,v);
        f(root->right,count,v);
        if(root->left==NULL && root->right==NULL)
        {
            int flag=0;
            for(int i=1;i<=9;i++){
                if(v[i]%2!=0)
                    flag++;
            }
            if(flag==1 || flag==0)count++;
        }
        //backtracking
       v[root->val]++; 
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int count=0;
        //frequency array
        vector<int>v(10,0);
        f(root,count,v);
        return count;
    }
};
