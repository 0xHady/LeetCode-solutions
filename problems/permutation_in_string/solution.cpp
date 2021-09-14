class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector <int> first(26,0);
        vector <int> second(26,0);
        int l = 0 , r = 0;
        while(r < s1.size()){
            first[s1[r] - 'a'] ++;
            second[s2[r]- 'a'] ++;
            r++;
        }
        r--;
        
        while(r < s2.size()){
            if(first == second) return true;
            
            r++;
            if(r<s2.size()) second[s2[r] - 'a']++;
            second[s2[l]- 'a']--;
            l++;
        }
        return false;
        
        
        
    }
};