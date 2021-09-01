class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v(nums.size());
        for(int i =0 ; i < nums.size() ; i++){
            v[i] = {nums[i],i};
        }
        sort(v.begin(),v.end());
        int l = 0, r = v.size() -1;
        while(v[l].first + v[r].first != target){
            int sum = v[l].first + v[r].first;
            if(sum > target) r--;
            else l++;
        }
        return {v[l].second,v[r].second};
        
    }
};