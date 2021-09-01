#define ll long long

class Solution {
public:
    int reverse(ll x) {
        bool neg = (x < 0);
        if(neg) x*=-1;
        if(x == 0) return x;
        string s = "";
        while(x){
            s += to_string((x % 10)) ;
            x/=10;
        }
        ll res = stoll(s);
        if(res != (int)res) return 0;
        int r =res;
        if(neg) r*=-1;
        return r;
    }
};