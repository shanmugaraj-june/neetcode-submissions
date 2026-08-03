class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp  ;
        for(int num : nums) {
            mp[num]++ ;
        } 

        vector<pair<int , int>> pr  ; 
        for(auto it : mp)  {
            pr.push_back({it.second  , it.first}) ;
        } 

        sort(pr.rbegin()  , pr.rend()) ;  
        
        vector<int>ans  ;
        int index =  0  ;
       while(k--) {
        ans.push_back(pr[index].second) ;
        index++ ;
       } 
       return ans ;
    }
};
