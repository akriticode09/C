#include<stdio.h>
int main()
{
    int a[5],n,i, max = 0,seclarge = 0,temp ;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i =0;i<n;i++)
    {
        scanf("%d",& a[i]);
    }
    printf("the elements are ");
    for(i = 0;i<n;i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    max = a[0];
    seclarge = a[i];
    if(max  <seclarge)
    {
        temp = max;
        max = seclarge;
        seclarge = temp;
    }
    for(i = 1;i<n;i++)
    {
        seclarge = max;
        max = a[i];
    }

     if(a[i]> seclarge && a[i]!= max)
    {
        seclarge = a[i];
    }

printf("largest number = %d",max);
printf("second largest number = %d",seclarge);
}


    
