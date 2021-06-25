#include<iostream>
using namespace std;
class Solution
{
  public:
    int greatestOfThree(int A, int B, int C)
    {
        // code here
        if ((A>=B) && (A>=C))
            return A;
        else if ((B>=A) && (B>=C))
            return B;
        else
            return C;
    }
};

int main()
{
    Solution obj;
    cout<<obj.greatestOfThree(10,5,2)<<endl;
    cout<<obj.greatestOfThree(10,10,5)<<endl;
    return 0;
}