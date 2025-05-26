class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //crearting unoredered_map to store each item's index and item
        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++)
        {
            int complement = target-nums[i];
            //search complement in map
            if(mpp.find(complement)!=mpp.end())
            {
                //complement found
                return {mpp[complement],i};
            }

            else
            {
                //enter in map
                mpp[nums[i]] = i;
            }


        }


        return {};
        
    }
};