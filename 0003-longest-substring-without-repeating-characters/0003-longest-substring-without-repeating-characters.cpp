class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Contiguous sequence
        unordered_set<char>charSet;
        int start = 0;
        int end = 0;
        int maxLen = 0;

        for(int end=0;end<s.length();end++)
        {
            while(charSet.find(s[end])!=charSet.end())
            {
                //erase from left to decrease the size of sliding window
                charSet.erase(s[start]);
                start++;

            }

            charSet.insert(s[end]);
            maxLen = max(maxLen,end-start+1);
            
        }


        return maxLen;
    


        
    }
};