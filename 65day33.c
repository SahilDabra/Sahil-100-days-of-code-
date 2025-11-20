// Search in a sorted array using binary search.
#include <stdio.h>

int main()
{
    int n,i,x,low,high,mid,f=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in sorted order: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&x);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
            f=1;
            break;
        }
        else if(a[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(f)
        printf("Element found at index %d\n", mid);
    else
        printf("Element not found\n");
    return 0;
}
