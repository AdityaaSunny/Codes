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

    void right(TreeNode* root, vector<int>& ans, int depth){
        if(!root) return;
        if(ans.size()<depth){
            ans.push_back(root->val);
        }
        right(root->right,ans,depth+1);
        right(root->left,ans,depth+1);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        right(root,ans,1);
        return ans;
    }
};