#include<iostream>
using namespace std;

int main()
{
    int n = 9, arr[n], avg[3];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < 9; i ++)
    {
        if(i%3 == 0)
            avg[0] += arr[i];
        
        if(i%3 == 1)
            avg[1] += arr[i];

        if(i%3 == 2)
            avg[2] += arr[i];
    }

    for(int i = 0; i < 3; i++)
    {
        avg[i] = avg[i]/3;
    }

    int max = avg[0];
    for(int i = 0; i < 3; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    for(int i = 0; i < 3; i++)
    {
        if(arr[i] == max)
        {
            cout<<"Trainee No : "<<i+1<<endl;
        }
    }
    
    return 0;
}