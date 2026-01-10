class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //we use hash set for uniqueness of the char in the string...

        unordered_set<int>uniques;

        //two pointer approach for traversal in O(n)...

        int start = 0;
        int end;
        int max_len = 0;

        for(end=0;end<s.length();end++)
        {

            while(uniques.find(s[end])!=uniques.end()){
                //duplicacy occured
                uniques.erase(s[start]);
                start++;

            }



            //if char is unique
            //add in the uniques


            uniques.insert(s[end]);
            int length = end-start+1;
            max_len = max(length, max_len);


        }


        return max_len;





    }
};