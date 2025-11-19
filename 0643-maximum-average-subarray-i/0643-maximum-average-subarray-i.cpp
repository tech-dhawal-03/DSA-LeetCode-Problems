class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        long long currentSum = 0;

        for(int i=0;i<k;i++){
            //sum of first window consisting of k     elements
            currentSum+=nums[i];
        }

        long long maxSum = currentSum;

        for(int right = k;right<nums.size();right++){
            currentSum+=nums[right];
            currentSum-=nums[right-k];
            maxSum = max(currentSum,maxSum);
        }



        double ans = (maxSum*1.0)/k;
        return ans;

        
        
    }
};