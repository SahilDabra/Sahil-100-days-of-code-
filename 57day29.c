// Find the sum of array elements
#include <stdio.h>

int main()
{
    int n, i, s = 0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("Sum is %d\n",s);
    return 0;
}
