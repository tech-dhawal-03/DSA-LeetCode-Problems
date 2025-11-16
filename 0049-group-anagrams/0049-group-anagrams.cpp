class Solution {
public:
    vector<vector<string>>groupAnagrams(vector<string>& strs) {

        vector<vector<string>>anagrams;
        unordered_map<string,vector<string>>mpp;

        for(int i=0;i<strs.size();i++){
            string sorted = strs[i];
            sort(sorted.begin(),sorted.end());
            //here is the sorted string

            mpp[sorted].push_back(strs[i]);
            
        }


        //now iterate in hashmap

        for(auto &it : mpp){
            vector<string>order = it.second;
            anagrams.push_back(order);
        }     




        return anagrams;



        
    }
};