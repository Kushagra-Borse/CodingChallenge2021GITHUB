class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int x = flowerbed.length;
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
}