#include<conio.h>
#include<stdio.h>
int main()
{
    int a[5],i,small=0;
    printf("\n enter array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<=small)
            small=a[i];
    }
    printf("\n smallest number in the array=%d",small);
}