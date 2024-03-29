class Solution {
    public String reverseVowels(String s) {
        char[] chars = s.toCharArray();
        int i = 0, j = s.length() - 1;
        String vowels = "aeiouAEIOU";

        while (i < j) {
            while (i < j && vowels.indexOf(chars[i]) == -1) {
                i++; // Move i forward until a vowel is found.
            }
            while (i < j && vowels.indexOf(chars[j]) == -1) {
                j--; // Move j backward until a vowel is found.
            }

            if (i < j) {
                char temp = chars[i];
                chars[i] = chars[j];
                chars[j] = temp;
                i++;
                j--;
            }
        }

        return new String(chars);
    }
}
