"""
sum of all the numbers present in the string.

Input:

str = 1abc23

Output: 24
"""

def findSum(s):
        #code here
        sum = 0
        x = '0'
        for i in range(len(s)):
            if ord(s[i]) in range(48,58):
                x = x + s[i]
            else:
                sum += int(x)
                x = "0"
        sum += int(x)
        return sum

findSum("1abc23")    #Output : 24