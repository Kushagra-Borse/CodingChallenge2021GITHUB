class Solution {
    public String longestCommonPrefix(String[] v) {
        StringBuilder ans = new StringBuilder();
        Arrays.sort(v);
        String first = v[0];
        String last = v[v.length-1];
        for (int i=0; i<Math.min(first.length(), last.length()); i++) {
            if (first.charAt(i) != last.charAt(i)) {
                return ans.toString();
            }
            ans.append(first.charAt(i));
        }
        return ans.toString();
    }
}


// class Solution {
//     public String longestCommonPrefix(String[] strs) {
//         Arrays.sort(strs);
//         String s1 = strs[0];
//         String s2 = strs[strs.length-1];
//         int idx = 0;
//         while(idx < s1.length() && idx < s2.length()){
//             if(s1.charAt(idx) == s2.charAt(idx)){
//                 idx++;
//             } else {
//                 break;
//             }
//         }
//         return s1.substring(0, idx);
//     }
// }

// // class Solution {
// //     public String longestCommonPrefix(String[] strs) {
// //         int len = strs.length;

// //         if (len == 0) {
// //             return "";
// //         }

// //         // Finding the shortest string length
// //         int shortlen = Integer.MAX_VALUE;
// //         for (int i = 0; i < len; i++) {
// //             if (strs[i].length() < shortlen) {
// //                 shortlen = strs[i].length();
// //             }
// //         }

// //         int result = shortlen;
// //         String common = "";

// //         if (len == 1) {
// //             return strs[0];
// //         }

// //         for (int a = 0; a < len; a++) {
// //             String temp = strs[a];
// //             int index = shortlen;

// //             for (int i = a + 1; i < len; i++) {
// //                 for (int j = 0; j < shortlen; j++) {
// //                     if (j >= temp.length() || j >= strs[i].length() || temp.charAt(j) != strs[i].charAt(j)) {
// //                         index = Math.min(index, j);
// //                         break;
// //                     }
// //                 }
// //             }

// //             result = Math.min(result, index);
// //         }

// //         if (result > 0) {
// //             return strs[0].substring(0, result);
// //         } else {
// //             return "";
// //         }
// //     }
// // }



// // import java.util.*;

// class Main {

//     public static void main(String[] arg) {
//         String[] strs = { "flower", "flow", "flight" };
//         System.out.println(longestCommonPrefix(strs));

//     }

//     public static String longestCommonPrefix(String[] strs) {
//         int len = strs.length;

//         if (len == 0) {
//             return "";
//         }

//         // Finding the shortest string length
//         int shortlen = Integer.MAX_VALUE;
//         for (int i = 0; i < len; i++) {
//             if (strs[i].length() < shortlen) {
//                 shortlen = strs[i].length();
//             }
//         }

//         int result = Integer.MAX_VALUE;
//         // String common = "";

//         if (len == 1) {
//             return strs[0];
//         }

//         for (int a = 0; a < len; a++) {
//             String temp = strs[a];
//             int index = Integer.MAX_VALUE;

//             for (int i = a + 1; i < len; i++) {
//                 for (int j = 0; j < shortlen; j++) {
//                     if (j >= temp.length() || j >= strs[i].length() || temp.charAt(j) != strs[i].charAt(j)) {
//                         index = Math.min(index, j);
//                         break;
//                     }
//                 }
//             }

//             result = Math.min(result, index);
//         }

//         if (result > 0) {
//             return strs[0].substring(0, result);
//         } else {
//             return "";
//         }
//     }

// }

// // public class Day5 {
// // public static void main(String[] args) {
// // // finding common prefix between two strings
// // String str1, str2;
// // // Scanner sc = new Scanner(System.in);
// // // str1 = sc.nextLine();
// // // str2 = sc.nextLine();
// // // int s1 = str1.length(), s2 = str2.length();

// // // String[] strs = {"dog","racecar","car"};
// // String[] strs = {"flower","flow","flight"};
// // // String[] strs = {"a"};

// // int len = strs.length;

// // // Finding the shortest string
// // int shortlen = Integer.MAX_VALUE;
// // for (int i = 0; i < len; i++) {
// // if (strs[i].length() < shortlen) {
// // shortlen = strs[i].length();
// // }
// // }

// // System.out.println(shortlen);

// // int result = 0;
// // String common = "";

// // for (int a = 0; a < len; a++) {

// // String temp = strs[a];
// // int index = 0;

// // for (int i = a+1; i < len; i++) {
// // // if(a == i)

// // for (int j = 0; j <= shortlen; j++) {
// // String iistr = strs[i];
// // String iistrsubstr = strs[i].substring(0,j);
// // String tempsubstr = temp.substring(0,j);

// // if (tempsubstr.equals( iistrsubstr)) {
// // index = j;
// // System.out.println("Substring " + " : " + temp.substring(0, j));

// // } else {
// // System.out.println("Broke the loop " + " a : " + a + ", i : " + i + ", j : "
// // + j + " Substring " + " : " + temp.substring(0, index));

// // break;
// // }
// // }
// // }
// // if (index > result) {
// // result = index;
// // }
// // }
// // System.out.println("Substring " + " : " + strs[0].substring(0, result));

// // }
// // }

// // // for(int i = 1; i < shortlen; i++){
// // // // if(str1.substring(0, i+1).equals(str2.substring(0, i+1))){
// // // // common += str1.charAt(i);
// // // // System.out.println("Substring " + i + " : " + common );
// // // // }
// // // // System.out.println("Substring " + i + " : " + common );

// // // // Now just checking the character at the index
// // // if(temp.charAt(i) == strs[i].charAt(i)){
// // // common += str1.charAt(i);
// // // }
// // // else{
// // // break;
// // // }
// // // }