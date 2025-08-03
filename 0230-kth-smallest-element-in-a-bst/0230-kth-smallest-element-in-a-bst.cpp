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
    void helper(TreeNode*root, int target)
    {
        //inorder traversal
        if(!root) return;
        //go in left
        helper(root->left,target);
        //when reaches root node
        counter++;
        //also check condition
        if(counter == target)
        {
            ans = root->val;
            return;
            //don't go to right
        }


        helper(root->right,target);
 

    

    }

    int kthSmallest(TreeNode* root, int k) {
        //we will use inorder traversal
        helper(root,k);

        return ans;














        



        
    }
};