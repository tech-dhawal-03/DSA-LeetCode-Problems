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
    int maxHeight = 0;
    //function to calculate height of any tree
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;

        int lh = height(root->left);
        int rh = height(root->right);
        maxHeight = max(maxHeight,lh+rh);

        return 1 + max(lh,rh);

    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        height(root);
        return maxHeight;


        




      
        
        
    }
};