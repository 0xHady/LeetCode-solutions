class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = -1;
        vector <bool> results(candies.size(),false);
        for(int i = 0 ; i < candies.size() ; i++)
                if(candies[i] > max)
                        max = candies[i];
        for(int i = 0 ; i < candies.size() ; i++)
            if(extraCandies + candies[i] >= max)
                results[i] = true;
        return results;
        
    }
};