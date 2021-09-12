class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int l = 0 , r = numbers.size()-1,sum;
        
        while(true){
            sum = numbers[l] + numbers[r]; 
            if(sum == target) 
                return {++l,++r};
            else if(sum > target) 
                r--;
            else 
                l++;
        }
    }
};