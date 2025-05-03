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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int lev = 0;
        //even --> left to right
        //odd --> right to left
        
        vector<vector<int>>ans;
        queue<TreeNode*>qt;

        if(!root) return {};

        qt.push(root);
        // 0-level done
    

        while(!qt.empty())
        {
            int n = qt.size();
            vector<int>level;

            for(int i=0;i<n;i++)
            {
                TreeNode* first = qt.front();
                qt.pop(); 
                
                //even case --> left to right
                if(first->left) qt.push(first->left);
                if(first->right) qt.push(first->right);
                    

                level.push_back(first->val);

            }
        
            if(lev%2!=0) 
            {
                reverse(level.begin(),level.end());
            }
            
            ans.push_back(level);
            lev++;
        }

        return ans;



        
    }
};