class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int x = flowerbed.size();
        // int n = x;

        // So first I will find empty plot and then I will check if the adjacent plots are also empty or not.
        // If yes then I will put a flower there and n--
        // Else I will go to next plot
        if(n == 0){
            return true;
        }

        for(int i = 0; i < x && n > 0; i++){
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && ( i == x -1 || flowerbed[i+1] == 0)){ 
                flowerbed[i] = 1;
                i++;
                n--;
            }
        }
        if(n == 0){
            return true;
        }
        else{
            return false;
        }
        
    }
};


// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         int x = flowerbed.size();
//         // int n = x;

//         // So first I will find empty plot and then I will check if the adjacent plots are also empty or not.
//         // If yes then I will put a flower there and n--
//         // Else I will go to next plot
//         if(n == 0){
//             return true;
//         }
//         if(x == 1 ){
//             if(flowerbed[0] == 0 && n <= 1){
//                 return true;
//             }
//             else if(flowerbed[0] == 1){
//                 return false;
//             }
//         }
//         for(int i = 0; i < x && n > 0; i++){
//             if(i == 0){ // Condition at start point
//                  if(flowerbed[i] == 0 && flowerbed[i+1] == 0){
//                      n--;
//                      flowerbed[i] = 1;
//                  }
//             }
//             else if(i == x - 1){ //For end point
//                  if(flowerbed[i] == 0 && flowerbed[i-1] == 0){
//                      n--;
//                      flowerbed[i] = 1;
//                  }
//             }
//             else if(flowerbed[i] == 0 && flowerbed[i+1] == 0 && flowerbed[i-1] == 0){ // Between condtion
//                 flowerbed[i] = 1;
//                 n--;
//             }
//         }
//         if(n == 0){
//             return true;
//         }
//         else{
//             return false;
//         }
        
//     }
// };