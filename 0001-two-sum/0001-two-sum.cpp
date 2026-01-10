class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //an hash map to store no and its indice...

        unordered_map<int,int>track;

        //traversing the nums array


        for(int i=0;i<nums.size();i++)
        {
            int complement = target - nums[i];
            auto it = track.find(complement);   
            if(it!=track.end())
            {
                //complement found....

                return {i,it->second};
            }

            track[nums[i]] = i;


        }


        return {};
        
    }
};