class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();)
            {
                if(nums.at(j)==nums.at(i))
                {
                    nums.erase(nums.begin()+j);
                }

                else
                {
                    j++;
                }
            }

            
        }

        

        

        
        

      return nums.size();  
    }

    
    

    


};

