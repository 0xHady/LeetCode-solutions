class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string t; 
        string res = "";
        char c = ' ';
        while(ss >> t){
            reverse(t.begin(),t.end());
            res+=t;
            res+=" ";
        }
        res.erase(res.end()-1);
        
        return res;
    }
};