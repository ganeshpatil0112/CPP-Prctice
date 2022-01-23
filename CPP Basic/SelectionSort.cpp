//Selection Sort
/*
The selection sort algorithm sorts an array by repeatedly finding the minimum element
(considering ascending order) from unsorted part and putting it at the beginning.
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
     
    void selectionSort(int arr[], int n)
    {
        for(int i = 0; i < n; i++)
        {
            int min = i;
            for(int j = i; j < n; j++)
            {
                if(arr[j] < arr[min])
                    min = j;
            }
            swap(&arr[i], &arr[min]);
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
    ob.selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}