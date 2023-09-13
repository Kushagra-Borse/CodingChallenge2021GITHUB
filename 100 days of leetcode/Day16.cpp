class Solution {
public:
    string reverseWords(string s) {
        int x = s.length();

        string ans = "";

        int k = x - 1;
        stringstream iss(s);
        string word;

        iss >> word;
        ans += word;

        while(iss >> word){
            ans = word + " " + ans;
        }

        // for (int i = x - 1; i >= 0; i--){
        //     while(s[i] != ' '){
        //         k--;
        //     }
        //     ans = ans + " " + s.substr(k, i);
        //     i -= k;
        // }

        return ans;
    }
};