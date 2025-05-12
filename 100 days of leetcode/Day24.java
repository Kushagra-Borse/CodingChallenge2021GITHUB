class Solution {
    public int longestOnes(int[] nums, int k) {
        int max_len = 0;
        int left = 0, right = 0;
        int zero_count = 0;
        int n = nums.length;
        
        while(right<n){
            if(nums[right] == 0){
                zero_count++;
            }
            if(zero_count > k){
                if(nums[left] == 0){
                    zero_count--;
                }
                left++;
            }   
            max_len = Math.max(max_len, right - left + 1);
            right++;
        }

        return max_len; 
    }
}