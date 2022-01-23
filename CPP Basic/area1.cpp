#include<iostream>
using namespace std;
class areas
{
    int side,length,breadth,result,ch;
    public:
    int area(int);
    int area(int, int);
    void input();
};
void areas::input()
{
    cout<<"chose whose area you want to calculate...!!"<<endl;
    cout<<"enter :\n1 for square \n2 for rectangle"<<endl;
    cin>>ch;
    switch (ch);
    {
        case 1 :cout<<"Enter the side of Square : "<<endl;
                cin>>side;
                result = area(side);
                cout<<"Area of Square is : "<<result;
                break;
        case 2 :cout<<"Enter the length & breadth of Rectangle : "<<endl;
                cin>>length,breadth;
                result = area(length,breadth);
                cout<<"Area of Rectangle is : "<<result;
                break;
         default :cout<<"invalid choise...!!"<<endl;
                input();
    }
}
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
    obj.input();
}