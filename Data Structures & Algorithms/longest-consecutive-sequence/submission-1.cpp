class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
       //  brute force approch  
       unordered_set<int> store( nums.begin()  , nums.end()) ;  
       int res = 0  ;
       for( int num :nums) {
         // find start point  
         if( store.find(num - 1)  == store.end()) {
            int len  = 1 ; 
            while(store.find(num+ len)  != store.end()) {
                len++; 
            }  
            res  = max(res , len) ;
         }
       } 
       return res ;  
    } 
};
