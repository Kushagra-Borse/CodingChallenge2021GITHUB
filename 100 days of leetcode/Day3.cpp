#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Doing without converting the integer into string
        /**
        This is happening in my visual studio code
        Here why y is less than one when I initialize y = 0
        int y = 0; 
        y = 99 x = 121 x%10 = 1 i = 2 pow(10,i) = 100 (x%10)*(pow(10,i)) = 100
        y = 119 x = 12 x%10 = 2 i = 1 pow(10,i) = 10 (x%10)*(pow(10,i)) = 20
        y = 120 x = 1 x%10 = 1 i = 0 pow(10,i) = 1 (x%10)*(pow(10,i)) = 1
        0
        **/
        long y = 0; //Initializing y = 1 gives me the right answer in VScode but why
        int temp = x;
        if(x < 0){
            return false;
        }
        int i = to_string(x).length() - 1;
        while(x > 0){
            y = y + (x%10)*(pow(10,i));
            // cout << "y = " << y << " x = " << x  << " x%10 = " << x%10 << " i = " << i << " pow(10,i) = " << pow(10,i) << " (x%10)*(pow(10,i)) = " << (x%10)*(pow(10,i)) << endl;
            x = x / 10;
            i--;
        }
        if (temp == y){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){
    Solution S = Solution();
    cout << S.isPalindrome(121);
    return 0;

}