#include<iostream>
#include<algorithm>
using namespace std;

int kthelement(int arr[],int n, int k)
{
    
    /*for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);*/
    
    sort(arr, arr + n);

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }

    return arr[k-1];
}

int main()
{
    int arr[] = {7, 10, 4, 20, 15};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Kth element of array is : "<<kthelement(arr,n, k);
    return 0;
}