#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter two numbers to sum of digit : ");
    scanf("%d%d",&a,&b);
    printf("a = %d and b = %d",a,b);
    result = a + b;
    printf("\nthe sum of digit = %d",result);
    return 0;
}