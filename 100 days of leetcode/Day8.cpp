class Solution {
public:
    string gcdOfStrings(string_view str1, string_view str2) {
        for (int i = gcd(str1.size(), str2.size()); i > 0; --i) {
            auto const prefix = str1.substr(0, i);
            if (divides(str1, prefix) && divides(str2, prefix)) return string(prefix);
        }
        return string();
    }
private:
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        else {
            return gcd(b, b % a);
        }
    }

    bool divides(string_view big, string_view little) {
        if (big.size() % little.size() != 0) { return false; }
        while (big.size() > 0) {
            if (big.substr(0, little.size()) != little) { return false; }
            big.remove_prefix(little.size());
        }
        return true;
    }
};


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       int len1=str1.length();
       int len2=str2.length();
       if(str1+str2 != str2+str1)
       return "";
       else
       return str2.substr(0,gcd(len1,len2)); 
    }
};

// #include <string>
// #include <iostream>

// using namespace std;

// class Day8 {
// public:
//     void main() {
//         string str1 = "ABABABABAB", str2 = "ABAB";
//         int l1 = str1.length();
//         int l2 = str2.length();

//         int index = 0;
//         if(str1 == str2){
//             cout << str1;
//         }

//         int min_len = min(l1,l2);

//         for(int i = 1; i <= min_len; i++){
//             if(l1 >= l2 && str1.find(str2) != string::npos /* starting position = 0 and length of substring = i*/ && l1%i == 0 && l2%i == 0){
//                 for(int j = 0; j < l2; j++){
//                     if(repeatString(str2.substr(0, i), j) == str1){
//                         index = i;
//                         break;
//                     }
//                 }
//                 int j = 0;
//                 while(j <= l1){
//                     if(repeatString(str2.substr(0, i),j) == str1){
//                         index = i;
//                     }
//                     j += 1;
//                 }
//             }
//             else if (l2 > l1 && str2.find(str1) != string::npos){
//                 if(str2.find(str1.substr(0,i)) != string::npos && l2%i == 0 && l1%i == 0){
//                     index = i;
//                 }
//             }
//         }
//         cout << str1.substr(0,index);
//     }
//     string repeatString(string str, int times){
//         string result = "";
//         for(int i = 0; i < times; i++){
//             result += str;
//         }
//         return result;
//     }
// };