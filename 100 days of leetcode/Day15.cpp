class Solution {
public:
    vector<int> countBits(int n) {
        std::vector <int> ans(n+1, 0);

        for(int i = 1; i <= n; i++){
            if(i%2 == 0){
                ans[i] = ans[i/2];
            }
            else{
                ans[i] = ans[i/2] + 1;
                }
            
        }

        return ans;
    }
};

// 0       0
// 1       1
// 10      1
// 11      2
// 100     1
// 101     2
// 110     2
// 111     3
// 1000    1
// 1001    2
// 1010    2
// 1011    3
// 1100    2
// 1101    3
// 1110    3
// 1111    4


// 0 1 1 2 1 2 2 3 1 2 2  3  2  3  3  4
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15