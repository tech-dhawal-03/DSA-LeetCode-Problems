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
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        //queue to store node and index....
        map<int,map<int,multiset<int>>> nodes;
        queue<tuple<TreeNode*,int,int>>q;

        //base-case
        if(!root) return {};

        q.push({root,0,0});

        while(!q.empty())
        {
            auto [node, col, row] = q.front();
            // (0,0) --> node
            q.pop();

            nodes[col][row].insert(node->val);
            if(node->left) q.push({node->left,col-1,row+1});
            if(node->right) q.push({node->right, col+1, row+1});

          

        }

        vector<vector<int>> result;

        for(auto & [col,row_map] : nodes)
        {

            vector<int>col_vals;
            for(auto &[row,vals] : row_map)
            {
                col_vals.insert(col_vals.end(),vals.begin(),vals.end());
            }

            result.push_back(col_vals);
        }






        return result;



       

        
        
    }
};