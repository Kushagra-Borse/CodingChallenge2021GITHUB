class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = 0;
        int x = nums.size();
        double temp = 0;
        for(int j = 0; j < k; j++){
            avg += nums[j];
        }
        temp = avg;

        for(int i = k; i < x; i++){
            temp += nums[i];
            temp -= nums[i-k];

            if(avg < temp){
                avg = temp;
            }
        }
        return avg/k;
    }
};