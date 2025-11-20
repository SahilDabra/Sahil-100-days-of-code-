// Read and print elements of a one-dimensional array
#include <stdio.h>

int main()
{
    int s,n,i;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int a[s];
    scanf("%d",&n);
    printf("Enter number of elements:");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
