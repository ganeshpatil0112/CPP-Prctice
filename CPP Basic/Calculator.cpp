#include<iostream>
using namespace std;
int add(int,int);
int sub(int,int);
int mul(int,int);
float division(int,int);
int main()
{
    int a,b,c,op;
    cout<<"enter the two number : ";
    cin>>a>>b;
    cout<<"what would do with "<<a<<" and "<<b;
    cout<<"enter :\n1. to add\n2. to subtraction\n3.  to multiplication\n4. to division";
    cin>>op;
    switch(op)
    {
        case 1 : c = add(a,b);
                cout<<"additon :"<<c<<endl;
                break;
        case 2 : c = sub(a,b);
                cout<<"subtraction :"<<c<<endl;
                break;
        case 3 : c = mul(a,b);
                cout<<"multiplication :"<<c<<endl;
                break;
        case 4 : cout<<"division :"<<division(a,b)<<endl;
                break;
        default: cout<<"invalid entry !!"<<endl;
    }
}
int add(int x,int y)
{
    int z;
    z = x + y;
    return z;
}
int sub(int x,int y)
{
    int z;
    z = x - y;
    return z;
}
int mul(int x,int y)
{
    int z;
    z = x * y;
    return z;
}
float division(int x,int y)
{
    float z;
    z = (float)x/y;
    return z;
}
