"""
You are given a string s. You need to reverse the string.

Example 1:

Input:

s = Geeks

Output: skeeG
"""

def reverseWord(s):
    #your code here
    return s[::-1]

reverseWord("Geeks")   #Output : skeeG

"""
string reverseWord(string str)
{
    
    //Your code here
    string x = "";
    for(int i = str.length() - 1; i>=0; i--)
    {
        x += str[i];
    }
    return x;
}
"""