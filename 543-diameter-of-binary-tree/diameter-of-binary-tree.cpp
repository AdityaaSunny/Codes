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
int ans=0;
    int depth(TreeNode* root){
        if(!root) return 0;
        int x=depth(root->right);
        int y= depth(root->left);
        return max(x,y)+1;
    }
    void check(TreeNode* root){
        if(!root) return;
        int x=depth(root->right);
        int y=depth(root->left);
        ans=max(ans,x+y);
        check(root->left);
        check(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        check(root);
        return ans;
    }
};