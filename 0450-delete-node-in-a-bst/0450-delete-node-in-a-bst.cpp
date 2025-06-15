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
    TreeNode* findMin(TreeNode* node)
    {
        while(node && node->left) node = node->left;
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        //if there is no root
        if(!root) return NULL;

        //obtain node to delete in bst
        if(key<root->val)
        {
            //search in left
            root->left = deleteNode(root->left,key);
        }

        else if(root->val<key)
        {
            //search in right
            root->right = deleteNode(root->right,key);
        }

        else 
        {
            //key found in bst
            if(!root->left && !root->right)
            {
                //no children
                delete root;
                return NULL;
            }

            else if(!root->left)
            {
                //one right children exists
                //store right childen
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            else if(!root->right)
            {
                //same logic for left children

                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            else
            {
                //both children exists...
                //find inorder successor in right, because successor can exists only in right being greater than the root
                TreeNode* temp = findMin(root->right);
                //replace root with successor
                root->val = temp->val;
                //delete successor
                root->right = deleteNode(root->right,temp->val);
            }





        }


        return root;
         
    }
};