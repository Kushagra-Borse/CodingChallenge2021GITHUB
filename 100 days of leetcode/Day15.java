class Solution {
    public int[] countBits(int n) {
        int [] lis = new int[n+1];

        lis[0] = 0;

        for(int i = 1; i <= n; i++){
            lis[i] = lis[i >> 1] + (i & 1);
        }

        return lis;
    }
}