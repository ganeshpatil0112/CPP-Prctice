//Reverse Of String Without Extra Variable.
/*
Input:

s = Geeks

Output: skeeG
*/

#include<iostream>
using namespace std;
int main()
{
    string s = "Geeks";
    int start = 0;
    int end = s.length()-1;
    while(start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout<<s;      //Output : skeeG
}