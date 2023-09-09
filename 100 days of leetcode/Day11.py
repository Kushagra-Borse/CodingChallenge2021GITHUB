class Solution():
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = {'a','e','i','o','u','A','E','I','O','U'}

        i = 0
        j = len(s) - 1

        s = list(s)


        while i < j:
            while i < j and s[i] not in vowels:
                i += 1
            
            while i < j and s[j] not in vowels:
                j -= 1
            
            if i < j:
                temp = s[i]
                s[i] = s[j]
                s[j] = temp
                i += 1
                j -= 1


        
        return "".join(s)

a = Solution()

print(a.reverseVowels("badei"))

        