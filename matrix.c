#include <stdio.h>
int main()
{
    int a[10][10], b[10][10] ,s[10][10];
    int n , r1,r2,c1,c2,i,j,k;
    printf("enter the value of n");
    scanf("%d",& n);
    printf("enter the elements of first matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",& a[i][j]);
        }
    }
    printf("enter the elements of second matrix");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",& b[i][j]);
        }
    }
   if(c1!=r2)
   {
    printf("cannot be multiplied");
   }
   else
   {  
   printf("enter the elements ");
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c2;j++)
    {
        for(k=0;k<r2;k++)
        {
        scanf("%d",&s[i][j]);
        }
    }
   }
   s[i][j] = s[i][j] + a[i][k] * b[k][j];
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c2;j++)
    {
        printf("%d",s[i][j]);
    }
   }
   }


}