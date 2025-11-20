// Find the maximum and minimum element in an array
#include <stdio.h>

int main()
{
    int n,i,max,min;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Max is %d\n",max);
    printf("Min is %d\n",min);
    return 0;
}
