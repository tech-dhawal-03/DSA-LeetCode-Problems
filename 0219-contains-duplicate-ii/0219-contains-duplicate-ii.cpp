class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        int left = 0;
        int right = 0;
        int n = nums.size();
        unordered_set<int>track;

        for(;right<n;right++)
        {

             while(abs(left-right)>k)
            {
                //shrink window
                track.erase(nums[left]);
                left++;
            }


            if(track.find(nums[right])!=track.end())
            {
                //element found in the hashset
                return true;
            }

            else {
                track.insert(nums[right]);
            }
            

            //this evaluates second condition

           


        }
        

        return false;
    }
};