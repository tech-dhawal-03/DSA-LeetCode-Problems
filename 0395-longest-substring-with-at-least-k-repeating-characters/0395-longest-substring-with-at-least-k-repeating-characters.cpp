class Solution {
public:
    int longestSubstring(string s, int k) {
        //sliding window won't be enough to solve this      problem, so we will use divide and conquer method...

        //first count each chars and store in the hashmap or an array to identify which char is not satisfying k condition
        int n = s.length();
        if(n==0) return 0;


        vector<int>charCount(26,0);

        //traverse the string
        

        for(int i=0;i<n;i++)
        {
            charCount[s[i]-'a']++;
        }

        //we have stored each character count...

        //now we will divide the string based on the char count that doesn't satisfy k condition...

        int track = 0;
        while(track<n && charCount[s[track]-'a']>=k) track++;
        //no need to divide until each char satisfies the k condition...

        //track reached the end of the string
        if(track==n) return n;

        //divide the string and calclate it separately as the left and the right...

        int leftCalc = longestSubstring(s.substr(0,track),k);
        int rightCalc = longestSubstring(s.substr(track+1),k);


        return max(leftCalc,rightCalc);




        
    }
};