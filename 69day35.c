// Find the second largest element in an array


#include <stdio.h>

int main()
{
    int n,i,max,smax;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=smax=a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax&&a[i]!=max)
        {
            smax=a[i];
        }
    }
    printf("Second largest is %d\n",smax);
    return 0;
}
