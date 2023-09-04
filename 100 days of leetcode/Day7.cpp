class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string merged = "";
    int i = 0, j = 0;

    while (i < word1.length() && j < word2.length()) {
        merged += word1[i];
        merged += word2[j];
        i++;
        j++;
    }

    // Append the remaining characters from word1, if any
    while (i < word1.length()) {
        merged += word1[i];
        i++;
    }

    // Append the remaining characters from word2, if any
    while (j < word2.length()) {
        merged += word2[j];
        j++;
    }

    return merged;
    
        // string word3 = "";
        
        // while(word1.length() && word2.length()){
        //     word3 += word1[0];
        //     word3 += word2[0];
        //     word1.erase(word1.begin() + 0);
        //     word2.erase(word2.begin() + 0);
        // }

        // if(word1.length()){
        //     word3 += word1;
        // }
        // else{
        //     word3 += word2;
        // }

        // return word3;
    }
};