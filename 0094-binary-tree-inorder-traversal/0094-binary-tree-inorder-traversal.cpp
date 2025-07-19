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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> r;
        inorder(root,r);
        return r;
    }
    void inorder(TreeNode* root,vector<int>& r){
        if(root!=NULL){
            inorder(root->left,r);
            r.push_back(root->val);
            inorder(root->right,r);
        }
    }
};