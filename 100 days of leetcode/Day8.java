public class Solution {
    public String gcdOfStrings(String str1, String str2) {
        int l1 = str1.length();
        int l2 = str2.length();
        int gcdLength = gcd(l1, l2);

        String candidate = str1.substring(0, gcdLength);

        if (isRepeated(candidate, str1) && isRepeated(candidate, str2)) {
            return candidate;
        }

        return "";
    }

    private int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    private boolean isRepeated(String candidate, String str) {
        int n = str.length();
        int m = candidate.length();
        if (n % m != 0) {
            return false;
        }
        StringBuilder repeated = new StringBuilder(candidate);
        while (repeated.length() < n) {
            repeated.append(candidate);
        }
        return repeated.toString().equals(str);
    }
}
// public class Solution {
//     public String gcdOfStrings(String str1, String str2) {
//         int l1 = str1.length();
//         int l2 = str2.length();
//         int index = 0;

//         if (str2.equals(str1)) {
//             return str2;
//         }

//         for (int i = 1; i <= Math.min(l1, l2); i++) {
//             if (l1 >= l2 && str1.contains(str2)) {
//                 if (str2.substring(0, i).equals(str1.substring(0, i)) &&
//                     l2 % i == 0 && l1 % i == 0) {
//                     index = i;
//                     for (int j = 0; j < l2; j++) {
//                         if ((str2.substring(0, i)).repeat(j + 1).equals(str1)) {
//                             index = i;
//                             break;
//                         }
//                     }
//                     int j = 0;
//                     while (j <= l1) {
//                         if ((str2.substring(0, i)).repeat(j+1).equals(str1)) {
//                             index = i;
//                         }
//                         j++;
//                     }
//                 }
//             } else if (l2 > l1 && str2.contains(str1)) {
//                 if (str1.substring(0, i).equals(str2.substring(0, i)) &&
//                     l1 % i == 0 && l2 % i == 0) {
//                     index = i;
//                 }
//             }
//         }
//         return str1.substring(0, index);
//     }

// }