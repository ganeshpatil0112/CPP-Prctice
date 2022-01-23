#include<iostream>
using namespace std;

bool isprime(int n)
{
    int m = n / 2;
    if(n <= 1)
        return false;

    for(int i = 2; i <= m; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    bool x;
    cin>>n;
    x = isprime(n);
    if(x)
        cout<<"Prime Number";
    else
        cout<<"Not Prime Number";
    return 0;
}