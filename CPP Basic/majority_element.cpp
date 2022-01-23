/*
A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Example 1:

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3

Example 2:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        if(size == 1)
            return a[0];
        int major = a[0], count = 1;
        for(int i = 0; i < size; i++)
        {
            if(a[i] == major)
                count++;
            else
                count--;
            if(count == 0)
            {
                major = a[i];
                count = 1;
            }
        }
        
        int x = ismajor(a, size, major);
        return x;
    }
    int ismajor(int a[], int size, int major)
    {
        int count = 0;
        for(int i = 0; i < size; i++)
        {
            if(a[i] == major)
                count++;
            if(count > size/2)
                return major;
        }
        return -1;
    }
};


int main(){

    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    Solution obj;
    cout << obj.majorityElement(arr, n) << endl;
    return 0;
}