// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         // Good for memory
//         vector<int> list;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i+1; j < nums.size(); j++ ){
//                 if(nums[i] + nums[j] == target){
//                     list.push_back(i);
//                     list.push_back(j);
//                     // return {nums[i], nums[j]};
//                 }
//             }
//         }
//         return list;
//     }
// };


// Good for time complexity
#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numToIndex.find(complement) != numToIndex.end()) {
                result.push_back(numToIndex[complement]);
                result.push_back(i);
                break;
            }
            numToIndex[nums[i]] = i;
        }
        
        return result;
    }
};
