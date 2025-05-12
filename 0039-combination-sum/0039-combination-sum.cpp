class Solution {
public:

    vector<vector<int>> ans;

    void helper(vector<int>& candidates, int target,int i, int cur_sum , vector<int>temp )
    {
        //base condition
        if(cur_sum > target)
        {
            return;
        }

        if(i==candidates.size())
        {
            if(cur_sum == target)
            {
                ans.push_back(temp);
            }
            return;
        }

        cur_sum+=candidates.at(i);
        temp.push_back(candidates.at(i));
        helper(candidates,target,i,cur_sum,temp);

        cur_sum-=candidates[i];
        temp.pop_back();
        helper(candidates,target,i+1,cur_sum,temp);


        
    }




    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        helper(candidates,target,0,0,temp);
        return ans;

        
    }
};