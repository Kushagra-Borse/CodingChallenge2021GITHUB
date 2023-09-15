class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] answer = new int[nums.length];

        //Finding if there are two zeros or more
        int count = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == 0){
                count++;
            }
        }

        if(count > 1){ // If number of zeros is greater than two
            for(int i = 0; i < nums.length; i++){
                answer[i] = 0;
            }
        }
        else if(count == 1){ // If number of zero is one
            int temp = 1;   
            int index = 0;
            for(int i = 0; i < nums.length; i++){
                if(nums[i] != 0){
                    temp *= nums[i];
                }
                else{
                    index = i;
                }
                answer[i] = 0;
            }
            answer[index] = temp;
            // answer.push_back(0);
        }
        else{ // if there is no zero element
            int temp = 1;
            for(int i = 0; i < nums.length; i++){
                temp *= nums[i];
            }
            for(int i = 0; i < nums.length; i++){
                answer[i] = temp/nums[i];
            }
        }

        return answer;
    }
};