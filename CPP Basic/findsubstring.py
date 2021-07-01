"""
The function takes two strings as arguments (s,x) 
and  locates the occurrence of the string x in the string s.

Input:
s = GeeksForGeeks, x = For

Output: 5
"""

def strstr(s,x):
    #code here
    if x in s:
        return s.index(x)
    else:
        return -1

strstr("GeeksForGeeks","For")

#For C++ Code:
"""
int strstr(string s, string x)
{
    return s.find(x);
}
"""