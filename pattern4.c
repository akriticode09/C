#include <stdio.h>
int main()
{
    int n=4,i,j;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n-i-1;j++)
        printf(" ");
        {
        for(j=1;j<2*i+1;j++)
        printf("*");
        {
            for(j=1;j<n-i-1;j++)
            printf("\n");

        }
        }
    }
    
}