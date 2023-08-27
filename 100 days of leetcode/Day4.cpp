/**
 * s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
 * It is guaranteed that s is a valid roman numeral in the range [1, 3999].
 * Priority of roman characters: I < V < X < L < C < D < M
 * if I comes before V then subtract
 * simialarly for I can be placed before V (5) and X (10) to make 4 and 9. 
    X can be placed before L (50) and C (100) to make 40 and 90. 
    C can be placed before D (500) and M (1000) to make 400 and 900.

    For example, M D C D X X I V i.e. MDCDXXIV
    M 1000 + D 500 - C 100 + D 500 + X 10 + X 10 - I 1 + V 5
    1500 + 400 + 20 + 4
    1924 
    
    So I will make a stack and when a character which is has more prioprity than the top of the stack
    Subtraction will take place
*/
#include <map>
#include <stack>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        //Initialoze map of priority
        map<char, int> pri = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        //Initialize stack
        //Sum
        int sum = 0;
        // int value = pri[s[0]];
        // // stack<int> st;
        // //sum += value;
        // //st.push(value);
        // //Method one
        // //------------
        // // for(int i = 1; i < s.length(); i++){
        // //     value = pri[s[i]];
        // //     if(st.top() < value){
        // //         int temp;
        // //         temp = st.top() * (-1);
        // //         st.pop();
        // //         st.push(temp);
        // //     }
        // //     st.push(value);
        // // }
        // // for(int i = 0; i < s.length(); i++){
        // //     sum += st.top();
        // //     st.pop();
        // // }
        // //----------------

        // //Another method
        // //--------------------
        // int value = pri[s[0]];
        // // stack<int> st;
        // //sum += value;
        // //st.push(value);
        // // for(int i = 1; i < s.length(); i++){
        // //     value = pri[s[i]];
        // //     if(st.top() < value){
        // //         sum = sum - st.top() + - st.top() + value;
        // //         st.push(value);
        // //     }
        // //     else{
        // //         sum += value;
        // //         st.push(value);
        // //     }
        // // }
        // // -----------------

        //Now without stack
        //Excellent runtime adn better memory
        int prev = pri[s[0]];
        sum = sum + prev;
        for(int i = 1; i < s.length() ; i++){
            if(prev < pri[s[i]]){
                sum = sum - prev - prev + pri[s[i]];
            }
            else{
                sum = sum + pri[s[i]];
            }
            prev = pri[s[i]];

        }

        return sum;

    }
};