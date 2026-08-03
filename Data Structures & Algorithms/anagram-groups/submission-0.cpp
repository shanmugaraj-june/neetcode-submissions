class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res ;  
        unordered_map<string  , vector<string>> mp  ; 
        for( string s : strs) {
            string word = s ;
            sort(word.begin() , word.end()) ; 
            mp[word].push_back(s) ;
        } 
        for(auto it : mp) {
            res.push_back(it.second) ;
        }

        return res ; 
    }
};
