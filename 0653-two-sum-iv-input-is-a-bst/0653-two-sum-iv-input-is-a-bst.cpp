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
    vector<int>traversal;

    void inorder(TreeNode* root)
    {
        if(!root) return;

        inorder(root->left);
        traversal.push_back(root->val);
        inorder(root->right);
    }


    bool findTarget(TreeNode* root, int k) {
        //this is the solution under O(N) time complexity & O(N) space complexity
        //finding inorder traversal....given for bst, inorder traversal is the sortest order

        inorder(root);

        //we obtained inorder traversal in array
        int n = traversal.size();
        int left = 0;
        int right = n-1;
      

        while(left<right)
        {
            int sum = traversal[left] + traversal[right];
            if(sum==k) return true;

            if(sum<k) left++;
            else right--;
        }



        return false;

        
    }
};