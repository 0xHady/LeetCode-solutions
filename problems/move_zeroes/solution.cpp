class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return ;
        
        int right = 0 , left = 0;
        while(right < n){
            if(nums[right] == 0)
                ++right;
            else{
                nums[left] = nums[right];
                if(right!=left)
                nums[right] = 0 ;
                //swap(nums[right],nums[left]);
                
                left++;
                right++;
                
            } 
        }
    }
};