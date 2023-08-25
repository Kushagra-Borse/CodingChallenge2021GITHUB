// runtime is 0ms beats 100% of users

#include <iostream>
#include <stack>
#include <map>

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        map<char, char> dic;

        dic['('] = ')';
        dic['['] = ']';
        dic['{'] = '}';

        for (char c : s) {
            if (dic.find(c) != dic.end()) {
                stack.push(c);
            } else {
                if (stack.empty() || dic[stack.top()] != c) {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};
