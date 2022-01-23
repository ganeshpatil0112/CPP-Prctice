#include<iostream>
using namespace std;
class areas
{
    public:
    int area(int);
    int area(int, int);
};
int areas::area(int x)
{
    return (x*x);
}
int areas::area(int a, int b)
{
    return (a*b);
}
int main()
{
    areas obj;
    int side,length,breadth,result;
    cout<<"Enter the side for area of square : "<<endl;
    cin>>side;
    cout<<"Area of Square : "<<obj.area(side)<<endl;
    cout<<"Enter the length and breadth for area of rectangle : "<<endl;
    cin>>length>>breadth;
    cout<<"Area of Rectangle : "<<obj.area(length,breadth)<<endl;
}