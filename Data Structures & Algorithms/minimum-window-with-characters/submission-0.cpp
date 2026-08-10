class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char , int> countT , window ; 
        int minLen = INT_MAX ; 
        int startIndex = -1 ; 
        for(char c : t) {
            countT[c]++ ;
        } 
        int have = 0 , need = countT.size() ;
        int left = 0 ; 
        for(int right = 0 ; right < s.size() ; right++ ) {
            char c = s[right] ;  
            window[c]++ ;
            if(countT.count(c) && window[c] == countT[c]) {
                have++ ;
            } 
            while(have == need)  {
                if(right - left +1  < minLen) {
                 minLen = right - left +1 ; 
                 startIndex = left ; 
                }   
                window[s[left]]-- ; 
                if(countT.count(s[left]) && window[s[left]] < countT[s[left]]){
                    have-- ;
                } 
                left++;
            }
        } 
       return minLen == INT_MAX ? "": s.substr(startIndex, minLen) ;
    }
};
