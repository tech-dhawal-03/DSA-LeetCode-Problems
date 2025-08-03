/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* helper(TreeNode* root, int val1, int val2)
    {
        if(!root) return nullptr;
        //base case
        if(val1<root->val && val2<root->val)
        {
            //both values are lesser than the root
            return helper(root->left,val1,val2);
        }

        else if(val1>root->val && val2>root->val)
        {
            //both values are greater than the rooot
            //recurse right
            return helper(root->right,val1,val2);
        }

        //root is the LCA
        //split point
        else return root;


        return 0;



     





    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = helper(root,p->val,q->val);
        return ans;
        
    }
};