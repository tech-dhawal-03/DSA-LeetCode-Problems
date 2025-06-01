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
 vector<int>ans;

    void helper(TreeNode* node, int level)
    {
       
        if(!node) return;
        //we will use reverse pre order traversal
        if(level==ans.size())ans.push_back(node->val);
        //move to right with one level increment 
        helper(node->right,level+1);
        //move to left
        helper(node->left,level+1);


    }


    vector<int> rightSideView(TreeNode* root) {

        helper(root,0);
        return ans;
        
    }
};