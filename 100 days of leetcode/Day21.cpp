class Solution{
    public:
    int maxOperations(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());
        int i = 0; 
        int j = nums.size() - 1;
        int count = 0;
        while(i < j){
            if(nums[i] + nums[j] == k){
                i++; j--; count++;
            }
            else if(nums[i] + nums[j] > k){
                j--;
            }
            else if(nums[j] + nums[i] < k){
                i++;
            }
        }
        return count;
    }
};

// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         int sum = 0;
//         unordered_map<int, int> freq;

//         for (int num : nums) {
//             int complement = k - num;
//             if (freq[complement] > 0) {
//                 sum++;
//                 freq[complement]--;
//             } else {
//                 freq[num]++;
//             }
//         }

//         return sum;
//     }
// };


// // class Solution {
// // public:
// //     int maxOperations(vector<int>& nums, int k) {
// //         int sum = 0;
// //         vector<int,int> used;
// //         vector<int,int> freq;
// //         for(int i = 0; i < nums.size(); i++){
// //             int comp = k - nums[i];
// //             if(freq[comp] > 0 && !used[comp]){
// //                 sum++;
// //                 freq[comp]--;
// //                 used[comp] = 1;
// //             }
// //             else{
// //                 freq[comp]++;
// //             }
// //             // for(int j = i + 1; j < nums.size(); j++){
// //             //     if((used[i] == false && used[j] == false) && nums[i] + nums[j] == k){
// //             //         sum++;
// //             //         used[i] = true;
// //             //         used[j] = true;
// //             //         cout << nums[i] << " i = " << i << " " << nums[j] << " j = " << j << endl;
// //             //         // i = 0;
// //             //         // j = 1;
// //             //         break;
// //             //     }
// //             // }
// //         }
// //         return sum;
// //     }
// // };