class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sx = s.length();
        int tx = t.length();
        int i = 0, j = 0;

        while(i < sx && j < tx && j >= i){
            while(s[i] != t[j] && j >= i && j < tx){
                j++;
            }
            if(j == tx){
                break;
            }
                i++;
                j++;
        }
        if(i == sx){
            return true;
        }
        else{
            return false;
        }
    }
};