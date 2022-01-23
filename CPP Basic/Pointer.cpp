#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    int **q;
    q = &p;
    cout<<"q : "<<q<<endl;
    cout<<*q<<endl;
    //cout<<**q<<endl;

    p = &a;
    cout<<"a : "<<a<<" "<<"p value : "<<*p<<endl;
    cout<<"p add : "<<p<<endl;

    **q = 12;
    cout<<"a : "<<a<<" "<<"p value : "<<*p<<endl;

    a = 7;
    cout<<"a : "<<a<<" "<<"p value : "<<*p<<endl;

    return 0;
}