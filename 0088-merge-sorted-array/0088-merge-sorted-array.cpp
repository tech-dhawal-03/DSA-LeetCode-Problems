class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(m==0) 
        {
            nums1=nums2;
            return;
        }


        if(n==0) return;
        //since array is sorted, we will satrt from back
        int i = m-1;
        //i stores last valid index of nums 1
        int j = n-1;
        //j stores last valid index of nums 2
        int k = m+n-1;
        //k stores last index og nums 1 from where merging will start

        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k] = nums1[i];
                i--;

            }


            else
            {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        //copy remaining elements
        if(j>=0)
        {
            for(int left=j;left>=0;left--)
        {
            nums1[k--] = nums2[left];
        }

        }
        
        
    }
};