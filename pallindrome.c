#include<stdio.h>
int main()
{
    int n,rem,rev = 0,N;
    printf("enter a number");
    scanf("%d",& n);
    N = n;
    while(n!=0)
    {
    rem = n%10;
    rev = rev*10 + rem;
    n = n/10;
    }
    if (N == rev)
    {
        printf("pallindrome");
    }
    else{
        printf("not pallindrome");
    }
    return 0;
}