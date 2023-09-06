class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max = candies[0];
        int len = candies.length;
        for(int i = 0; i < len; i++){
            if(max < candies[i]){
                max = candies[i];
            }
        }
        //Finding the maximum candies given to a child
        List<Boolean> result = new ArrayList<>(len);
        for(int i = 0; i < len; i++){
            if(candies[i] + extraCandies >= max){
                result.add(true);
            }
            else{
                result.add(false);
            }
        }
        return result;
    }
}