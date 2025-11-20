// Search for an element in an array using linear search.


#include <stdio.h>

int main()
{
    int n,i,x,f=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x) 
        {
            f=1;
            break;
        }
    }
    if(f)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found\n");
    return 0;
}
