class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2) return 1;
        if(nums.size()==2) return 2;
        int pos = 2;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]!=nums[pos-2])
            {
                //we can insert
                nums[pos++] = nums[i];
                
            }
        }


        return pos;
        
    }
};