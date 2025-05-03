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





    bool isSameTree(TreeNode* p, TreeNode* q) {
        //traversing both trees to check each node separately in O(N) complexity

        //lets perform preorder traversal
        //left root right

        //base case
        if(!p && !q) return true;
        //both are null

        //if one of the null
        if(!p || !q) return false;
        //if any one of them is null


        return (p->val == q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);

        


        




        
    }
};