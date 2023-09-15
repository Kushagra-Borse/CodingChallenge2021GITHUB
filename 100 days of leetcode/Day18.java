class Solution {
    public int largestAltitude(int[] gain) {
        int count = 0, max = 0;

        for(int i = 0; i < gain.length; i++){
            count += gain[i];
            if(count > max){
                max = count;
            }
        }
        return max;
    }
}