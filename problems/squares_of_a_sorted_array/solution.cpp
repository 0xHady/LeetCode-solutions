class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> res(nums.size());
        int l = 0, r = nums.size()-1, idx = r ;
        while(l <= r){
            if(abs(nums[l]) >= abs(nums[r])){
                res[idx--] = nums[l]*nums[l];
                l++;
            }else{
                res[idx--] = nums[r]*nums[r];
                r--;
            }
        }
        return res;
    }
};