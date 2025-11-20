// Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>

int main()
{
    int n,i,s=0,l=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }

    if(a[0]==s)
    {
        printf("0");
        return 0;
    }

    for(i=1;i<n;i++)
    {
        if(l==s-l-a[i])
        {
            printf("%d",i);
            return 0;
        }
        l+=a[i];
    }
    printf("-1");
    return 0;
}
