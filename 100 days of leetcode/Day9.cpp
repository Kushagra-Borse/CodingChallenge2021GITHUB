class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        //First find the greatest number of candies
        //Then check the sum candies[i] + extraCandies >= greatest candies
        vector<bool> result(candies.size());
        int max = candies[0];
        for(auto i = 0; i < candies.size(); ++i){
            if(candies[i] > max){
                max = candies[i];
            }
        }
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max){
                result[i] = true;
            }
            else{
                result[i] = false;
            }
        }
        return result;
    }
};