class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n <= 1) {
            return n;
        }
        
        int writeIndex = 0;  // Index to write compressed characters
        char currentChar = chars[0];  // Current character
        int count = 1;  // Consecutive count
        
        for (int i = 1; i < n; i++) {
            if (chars[i] == currentChar) {
                count++;
            } else {
                chars[writeIndex++] = currentChar;
                if (count > 1) {
                    string countStr = to_string(count);
                    for (char c : countStr) {
                        chars[writeIndex++] = c;
                    }
                }
                
                // Reset for the new character
                currentChar = chars[i];
                count = 1;
            }
        }
        
        // Process the last character group
        chars[writeIndex++] = currentChar;
        if (count > 1) {
            string countStr = to_string(count);
            for (char c : countStr) {
                chars[writeIndex++] = c;
            }
        }
        
        return writeIndex;
    }
};

x// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         if (chars.size() <= 1) {
//             return chars.size();
//         }

//         vector<char> ans;
//         int count = 1;

//         for (int i = 1; i <= chars.size(); i++) {
//             if (i < chars.size() && chars[i] == chars[i - 1]) {
//                 count++;
//             } else {
//                 ans.push_back(chars[i - 1]);
//                 if (count > 1) {
//                     string countStr = to_string(count);
//                     for (char c : countStr) {
//                         ans.push_back(c);
//                     }
//                 }
//                 count = 1;
//             }
//         }

//         chars = ans;  // Update the original vector
//         return ans.size();
//     }
// };

