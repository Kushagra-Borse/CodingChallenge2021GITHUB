// public class Day7 {
    
// }

class Solution {
    public String mergeAlternately(String word1, String word2) {

        StringBuilder merged = new StringBuilder();
        int i = 0, j = 0;

        while (i < word1.length() && j < word2.length()) {
            merged.append(word1.charAt(i));
            merged.append(word2.charAt(j));
            i++;
            j++;
        }

        // Append the remaining characters from word1, if any
        while (i < word1.length()) {
            merged.append(word1.charAt(i));
            i++;
        }

        // Append the remaining characters from word2, if any
        while (j < word2.length()) {
            merged.append(word2.charAt(j));
            j++;
        }

        return merged.toString();

        // String word3 = "";
        // while(word1.length() > 0 && word2.length() > 0){
        //     word3 = word3 + word1.substring(0,1) + word2.substring(0,1);
        //     word1 = word1.substring(1);
        //     word2 = word2.substring(1);
        // }

        // if(word1.length() > 0){
        //     word3 += word1;
        // }
        // else{
        //     word3 += word2;
        // }

        // return word3;
    }
}



class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder sb=new StringBuilder();
        int n1=word1.length();
        int n2=word2.length();
        int i=0;
        while(i<n1||i<n2)
        {
            if(i<n1)
            sb.append(word1.charAt(i));
            if(i<n2)
            sb.append(word2.charAt(i));
            i++;
        }    
        return sb.toString();
    }
}