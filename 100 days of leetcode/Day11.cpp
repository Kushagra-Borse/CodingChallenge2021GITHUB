class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowstr;
        vector<char> vowel {'a','e','i','o','u','A','E','I','O','U'};
        int i = 0, j = s.length() - 1;
        while(i < j){
            while(i < j && find(vowel.begin(), vowel.end(), s[i]) == vowel.end()){
                i++; // Moving i forward until a voewl is found
            }
            while(i < j && find(vowel.begin(), vowel.end(), s[j]) == vowel.end()){
                j--; // Moving j backward until a vowel is found
            }

            if(i < j){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;

                i++;
                j--;
            }
            
        }

        return s;
    }
};