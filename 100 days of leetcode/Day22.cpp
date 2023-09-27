class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long decodedLength = 0; // To store the length of the decoded string.
        
        // Calculate the length of the decoded string without constructing it.
        for (char c : s) {
            if (isdigit(c)) {
                int repeat = c - '0'; // Convert character to numeric value.
                decodedLength *= repeat; // Update the length based on repeat.
            } else {
                decodedLength++;
            }
        }
        
        for (int i = s.length() - 1; i >= 0; i--) {
            char c = s[i];
            if (isdigit(c)) {
                int repeat = c - '0';
                decodedLength /= repeat; // Reverse the length change.
                k %= decodedLength; // Adjust k based on the length.
            } else {
                if (k == 0 || k == decodedLength) {
                    return string(1, c);
                }
                decodedLength--;
            }
        }
        
        return "";
    }
};


// class Solution {
// public:
//     string decodeAtIndex(string s, int k) {
//         string ans = "";
//         int repeat;

//         for(int i = 0; i < s.length() && ans.length() <= k; i++){
//             if(!isdigit(s[i])){
//                 ans += s[i];
//             }
//             else{
//                 repeat = (int)s[i] - '0';
//                 string temp = ans;
//                 for(int j = 0; j < repeat - 1; j++){
//                     ans += temp;
//                 }
//             }
            
//         }
//         cout << ans;
//         string re = "";
//         re += ans[k-1];
//         // if(ans.length() >= k)
//         return re;
//     }
// };