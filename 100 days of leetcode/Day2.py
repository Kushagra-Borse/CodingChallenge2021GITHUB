class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """

        stack = []
        dic = {
            ')': '(',
            '}': '{',
            ']': '['
        }

        for char in s:
            if char not in dic:
                stack.append(char)
            elif char in dic:
                if len(stack) > 0 and stack[-1] == dic[char]:
                    stack.pop()
                else:
                    return False
        return len(stack) == 0
        

# Trying some stupid logic
        # index = 0
        # i = 0
        # j = len(s) - 1
        # dic = {
        #     ')': '(',
        #     '}': '{',
        #     ']': '['
        # }
        # if j < 0:
        #     return True
        # while s[j] not in dic:
        #     if j < 0:
        #         return False
        #     j = j - 1

        # while i < j and s[i] != dic[s[j]]:
        #     j = j - 1
        #     if j < i:
        #         return False
        #     while s[j] not in dic:
        #         j = j - 1

        # # if i >= j:
        # #     return True

        # index = j
        # result = False

        # if index > 1:
        #     result = self.isValid(s[1:index]) and self.isValid(s[index+1:])
        # else:
        #     rou = 0
        #     cur = 0
        #     box = 0
        #     for i in range(0, len(s)):
        #         if(rou < 0 or cur < 0 or box < 0):
        #             return False
        #         if s[i] == '(':
        #             rou = rou + 1
        #         elif s[i] == ')':
        #             rou = rou - 1
        #         elif s[i] == '{':
        #             cur = cur + 1
        #         elif s[i] == '}':
        #             cur = cur - 1
        #         elif s[i] == '[':
        #             box = box + 1
        #         elif s[i] == ']':
        #             box = box - 1

        #     if(rou < 0 or cur < 0 or box < 0):
        #         return False

        #     if rou + cur + box == 0:
        #         return True
        #     else:
        #         return False


        # if result == False:
        #     return False
        # else:
        #     return True

        