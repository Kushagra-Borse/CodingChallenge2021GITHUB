class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;

        //Finding if there are two zeros or more
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count++;
            }
        }

        if(count > 1){
            for(int i = 0; i < nums.size(); i++){
                answer.push_back(0);
            }
        }
        else if(count == 1){
            int temp = 1;   
            int index;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] != 0){
                    temp *= nums[i];
                }
                else{
                    index = i;
                }
                answer.push_back(0);
            }
            answer[index] = temp;
            // answer.push_back(0);
        }
        else{
            int temp = 1;
            for(int i = 0; i < nums.size(); i++){
                temp *= nums[i];
            }
            for(int i = 0; i < nums.size(); i++){
                answer.push_back(temp/nums[i]);
            }
        }

        return answer;
    }
};