#include <stdio.h>
#include <stdlib.h>


int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int findLongestConseqSeq(int arr[], const int n)
{
    int length = 1;
    int longestConsecutiveSeq = 1;
    int i =0;
    
    
    qsort( arr,n, sizeof(int), compare);
    for ( i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i+1]) { 
           continue; 
        }
        else if (arr[i] + 1 == arr[i + 1]) { 
           length++; 
        } 
        else {
           length = 1; 
        } 
       longestConsecutiveSeq = (longestConsecutiveSeq > length)? longestConsecutiveSeq: length;
    }
    return longestConsecutiveSeq;
}
int main()
{
    int arr[] = {2,5,7,7,8,8,9,4,10,12,3,6};
    
    const int N = sizeof(arr)/sizeof(arr[0]);
    const int longestConsecutiveSeq = findLongestConseqSeq(arr, N);
    
    printf("Longest Consecutive Sequence is %d",longestConsecutiveSeq);
    return 0;
}