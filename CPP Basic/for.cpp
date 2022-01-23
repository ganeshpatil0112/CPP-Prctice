#include<iostream>
using namespace std;
int main()
{
    int x[10],i;
    cout<<"enter the valus : ";
    for(i=0;i<=9;i++)
    {
        cin>>x[i];
    }
     for(i=0;i<=9;i++)
    {
        cout<<x[i]<<" ";
    }
    for(i=0;i<=9;i++)
    {
        x[i]  = x[i] * 0;
    }
    for(i=0;i<=9;i++)
    {
        cout<<x[i]<<" ";
    }
}