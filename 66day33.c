// Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int main()
{
    int n,i,x,pos=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter elements in sorted order: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i] > x)
        {
            break;
        }
    }
    pos=i;
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=x;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
