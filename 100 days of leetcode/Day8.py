class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """

        l1 = len(str1)
        l2 = len(str2)

        # k = 0
        index = 0
        if(str2 == str1): #if both are the same string
            return str2

        
        for i in range(1, min(l1, l2) + 1):
            if(l1 >= l2 and str2 in str1): # length of str1 > length of str2 and str2 exists in str1
                if(str2[0:i] in str1): # if substring of str2 exist in str1 
                    if(len(str1)%len(str2[0:i]) == 0 and l2%i == 0): # if the substring is multiple of len(str1) and len(str2)
                        for j in range(0, l2): # j = 0 to l2 + 2 because 
                            if str2[0:i]*j == str1: # Cheching if str1 is just concatenation of multiple copies of str2
                                index = i # index = maximum value of i
                                break
                        # Checking if strings are made up of same letter
                        j = 0
                        while(j <= l1): #now checking if strings are made up of just one letter
                            if(str2[0:i]*j == str1):
                                index = i
                            j += 1

            elif(l2 > l1 and str1 in str2): # length of str2 > length of str1 and str1 exists in str2
            # Similarly have the same logic from above if length if str2 is greater than length of str1
            # But there are not many testcases for this condition
                if(str1[0:i] in str2):
                    if(len(str2)%len(str1[0:i]) == 0 and l1%i == 0):
                        index = i
        
        return str1[0:index]


# # Full version with print statements

# class Solution(object):
#     def gcdOfStrings(self, str1, str2):
#         """
#         :type str1: str
#         :type str2: str
#         :rtype: str
#         """

#         l1 = len(str1)
#         l2 = len(str2)

#         # k = 0
#         index = 0
#         if(str2 == str1): #if both are the same string
#             return str2

        
#         for i in range(1, min(l1, l2) + 1):
#             if(l1 >= l2 and str2 in str1): # length of str1 > length of str2 and str2 exists in str1
#                 print("length of str1 > length of str2 and str2 exist in str1")
#                 if(str2[0:i] in str1): # if substring of str2 exist in str1 
#                     print("substring of str2 exist in str1")
#                     if(len(str1)%len(str2[0:i]) == 0 and l2%i == 0): # if the substring is multiple of len(str1) and len(str2)
#                         print("the substring is multiple of len(str1) and len(str2)")
#                         print("str2[0:i] : " + str2[0:i])
#                         print("str2[0:i] : " + str2[0:i])
#                         print("str2[0:i]*2  == str1 : " + str(str2[0:i]*2 == str1))
#                         for j in range(0, l2): # j = 0 to l2 + 2 because 
#                             print("\t j = "  + str(j))
#                             print("\t\tstr2[0:i]*j  == str1 : " + str(str2[0:i]*j == str1))
#                             if str2[0:i]*j == str1: # Cheching if str1 is just concatenation of multiple copies of str2
#                                 print("str1 is just concatenation of multiple copies of str2")
#                                 index = i # index = maximum value of i
#                                 break
#                         # Checking if strings are made up of same letter
#                         j = 0
#                         while(j <= l1): #now checking if strings are made up of just one letter
#                             print("Yup now checking if strings are made up of just one letter")
#                             print("\t j = " + str(j) + "\n\t\tstr2[0:i]*j == str1 : " + str(str2[0:i]*j == str1))
#                             if(str2[0:i]*j == str1):
#                                 index = i
#                             j += 1

#             elif(l2 > l1 and str1 in str2): # length of str2 > length of str1 and str1 exists in str2
#             # Similarly have the same logic from above if length if str2 is greater than length of str1
#             # But there are not many testcases for this condition
#                 if(str1[0:i] in str2):
#                     if(len(str2)%len(str1[0:i]) == 0 and l1%i == 0):
#                         index = i
        
#         return str1[0:index]



        