#reverse the string without reversing its individual words.
#Words are separated by dots.
"""
Example 1:

Input:

S = i.like.this.program.very.much

Output: much.very.program.this.like.i
"""
def reverseWords(self,S):
        # code here 
        a = ''
        x = []
        for i in S:
            if i == '.':        #Instead Of For Loop We Can Use Split Method By '.'
                x.append(a)     # x = S.split('.')
                a = ""
            else:
                a += i
        x.append(a)
        x.reverse()
        return ".".join(x)

S = "i.like.this.program.very.much"
reverseWords(S)    #Output : much.very.program.this.like.i