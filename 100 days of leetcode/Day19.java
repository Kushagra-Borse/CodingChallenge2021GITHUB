class Solution {
    public boolean increasingTriplet(int[] nums) {
        int firstMin = Integer.MAX_VALUE;  // Initialize the first minimum to positive infinity.
        int secondMin = Integer.MAX_VALUE; // Initialize the second minimum to positive infinity.

        for (int num : nums) {
            if (num <= firstMin) {
                firstMin = num; // Update the first minimum.
            } else if (num <= secondMin) {
                secondMin = num; // Update the second minimum.
            } else {
                return true; // If we find a number greater than both firstMin and secondMin, return true.
            }
        }

        return false; // If no increasing triplet is found, return false.
    }
}

// class Solution {
//     public boolean increasingTriplet(int[] nums) {
//         int x = nums.length;
//         int i = 0, j = 1, k = 2;
//         int pi = 0, pj = 1, pk = 2;

//         while(i < j && j < k && k < x){
//             pi = i;
//             pj = j;
//             pk = k;
//             //finding the ith element
//             while(i < j && j < k && (nums[i] > nums[j])){
//                 i++;
//                 System.out.println("i = " + i + " nums[i] = " + nums[i]);
//             }
//             while(j < k && (nums[j] > nums[k])){
//                 j++;
//                 System.out.println("j = " + j + " nums[j] = " + nums[j]);
//             }
//             while(k < x){
//                 if(nums[i] < nums[j] && nums[j] < nums[k]){
//                     return true;
//                 }
//                 System.out.println("k = " + k + " nums[k] = " + nums[k]);
//                 k++;
//             }
//             i = pi + 1;
//             j = pj + 1;
//             k = pk + 1;

//         }
//         return false;
        
//     }
// }