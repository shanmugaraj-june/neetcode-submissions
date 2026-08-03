class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp  ; 
        vector<vector<int>> bucket(nums.size() +1) ; 
        for(int num : nums) {
            mp[num]++ ;
        }  

        for( auto it  : mp) {
            bucket[it.second].push_back(it.first) ;
        } 

        vector<int> res ; 

        for( int i =  bucket.size() - 1; i > 0  ; i--) {
            for( int  x : bucket[i]) {
                res.push_back(x) ; 
                if( res.size()  ==  k) {
                    return res ;
                }
            }
        } 
        
        return res ;

         
    }
};
