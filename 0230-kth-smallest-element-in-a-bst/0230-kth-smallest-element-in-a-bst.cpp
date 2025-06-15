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
    int counter = 0;
    int ans;
    bool helper(TreeNode*root, int target)
    {
        if(!root) return false;
        if(helper(root->left,target)) return true;
        counter++;
        if(counter==target)
        {
            ans = root->val;
            return true;
            
        }

        return helper(root->right,target);

    

    }

    int kthSmallest(TreeNode* root, int k) {
        //we will use inorder traversal
        helper(root,k);

        return ans;














        



        
    }
};