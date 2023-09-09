class Solution {
    public void moveZeroes(int[] nums) {
        int x = nums.length;

        int i = 0, j = 0;
        while(i < x && j < x){
            while(i < x && nums[i] != 0){
                i++;
            }

            while(j < x && (nums[j] == 0 || j <= i)){
                j++;
            }

            if(i < x && j < x){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;
                j++;
            }
        }
    }
};
