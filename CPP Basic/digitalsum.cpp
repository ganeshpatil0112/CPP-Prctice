/*
Whene given n as input
DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.
*/
#include<iostream>
using namespace std;
int main()
{
    int n = 9998;            //ans = 9+9+9+8 = 35 = 3+5 = 8
    while (n/10 >0)
    {   
        int sum = 0;
        int temp = n;
        while(temp>0)
        {
            sum += temp%10;
            temp = temp/10;
        }
        n = sum;
    }
    cout<<n<<endl;
    return 0;
}