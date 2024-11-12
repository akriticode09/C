#include<stdio.h>
int main()
{
    int a[10][10];
    int n ,i,j;
    printf("enter a number");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",& a[i][j]);
        }
    }
    printf("array is %d",a[i][j]);

}