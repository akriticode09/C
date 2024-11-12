#include<stdio.h>
int main()
{
    int n,rem,i,sum = 0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    rem = n%10;
    sum = sum + rem ;
    n = n/10;
    printf("sum of digits = %d",sum);
    }
    return 0;
}