/*
1. Linear Search Code :
2. Binary Search Code :
Example 1:
Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2

Example 2:
Input:
N = 5, K = 6
arr[] = {1,2,3,4,6}
Output: 4
*/

#include<iostream>
using namespace std;

int LinearSearch(int arr[], int N, int X)
{
    for(int i = 0; i < N; i++)
    {
        if(arr[i] == X)
            return i;
    }
    return -1;
}

int BinarySearch(int arr[], int N, int K) 
{ 

    int start = 0, end = N-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == K)
        {
            return 1;
        }
        else if(K < arr[mid])
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return -1;
}

int main()
{
    int sizeOfArray;
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    int x;
        
    for(int i=0;i<sizeOfArray;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    cout<<LinearSearch(arr,sizeOfArray,x);
    cout<<BinarySearch(arr,sizeOfArray,x);
    return 0;
}