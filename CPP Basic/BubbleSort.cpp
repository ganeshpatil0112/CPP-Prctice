//Bubble Sort :
/*
To sort an array in increasing order in Bubble Sort.
we move the greatest element at the end in first pass. 
To do this we compare adjacent elements. 

In one pass, we compare every element to its next. 
If next element is smaller, we swap them else we do nothing.

Example 1:

Input: 
N = 5
arr[] = {4, 1, 3, 9, 7}
Output: 
1 3 4 7 9
*/

#include<iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


class Solution
{
    public:

    void bubbleSort(int arr[], int n)
    {
        for(int i = 0; i < n-1; i++)
        {
            for(int j = 0; j < n-i-1; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
};


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i];
    cout<<endl;
}
 
int main()
{
    int arr[1000],n,T,i;
    cin>>T>>n;
    
    for(i=0;i<n;i++)
        cin>>arr[i];
      
    Solution ob;
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    
    return 0;;
}